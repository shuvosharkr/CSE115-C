#include <stdio.h>
#include <string.h>
// Keywords of "C"
const char* keywords[] = {"auto", "break", "case", "char", "const", "continue",
"default", "do", "double", "else", "enum", "extern",
"float", "for", "goto", "if", "int", "long", "register",
"return", "short", "signed", "sizeof", "static",
"struct", "switch", "typedef", "union", "unsigned",
"void", "volatile", "while"};
// Tokens with names
char tokens[100][50][100]; // Assuming a maximum of 100 tokens with maximum lengthof 50 characters each
int numTokens = 0;
char* checkTokens(char* s) {
for (int i = 0; i < sizeof(keywords) / sizeof(keywords[0]); i++) {
if (strcmp(keywords[i], s) == 0)
return "C_KEYWORD";
}
if (s[0] >= '0' && s[0] <= '9') {
for (int i = 0; i < strlen(s); i++) {
if (s[i] == '.') return "FLOAT_LIT";
}
return "INT_LIT";
}
return "IDENT";
}
char* checkSymbols(char ch) {
char* tokenName = "";
switch (ch) {
case '=':
tokenName = "ASSIGN_OP";
break;
case '+':
tokenName = "ADD_OP";
break;
case '-':
tokenName = "SUB_OP";
break;
case '*':
tokenName = "MULTI_OP";
break;
case '/':
tokenName = "DIV_OP";
break;
case '(':
tokenName = "LEFT_PAREN";
break;
case ')':
tokenName = "RIGHT_PAREN";
break;
case ';':
tokenName = "SEMICOLON";
break;
}
return tokenName;
}
// Tokenizing the input expression
void tokenize(char* exp) {
char token[50];
int index = 0;
for (int i = 0; i < strlen(exp); i++) {
if (exp[i] == ' ') {
if (index > 0) {
token[index] = '\0';
strcpy(tokens[numTokens][0], token);
strcpy(tokens[numTokens][1], checkTokens(token));
numTokens++;
index = 0;
}
} else if (exp[i] == '=' || exp[i] == '+' || exp[i] == '-' || exp[i] == ';' ||
exp[i] == '*' || exp[i] == '/' || exp[i] == '(' || exp[i] == ')' ||
exp[i] == ';') {
if (index > 0) {
token[index] = '\0';
strcpy(tokens[numTokens][0], token);
strcpy(tokens[numTokens][1], checkTokens(token));
numTokens++;
index = 0;
}
char symbol[2] = {exp[i], '\0'};
strcpy(tokens[numTokens][0], symbol);
strcpy(tokens[numTokens][1], checkSymbols(exp[i]));
numTokens++;
} else if ((exp[i] >= 'A' && exp[i] <= 'Z') || (exp[i] >= 'a' && exp[i] <= 'z') ||
(exp[i] >= '0' && exp[i] <= '9') || exp[i] == '_') {
token[index++] = exp[i];
if (i == strlen(exp) - 1) {
token[index] = '\0';
strcpy(tokens[numTokens][0], token);
strcpy(tokens[numTokens][1], checkTokens(token));
numTokens++;
index = 0;
}
}
}
}
int main() {
char expression[1000];
printf("Enter the expression: ");
fgets(expression, sizeof(expression), stdin);
expression[strcspn(expression, "\n")] = '\0'; // Remove the newline character from fgets input
tokenize(expression);
printf("\n%-10s\t%s\n\n", "Token", "Lexeme");
for (int i = 0; i < numTokens; i++) {
printf("%-10s\t%s\n", tokens[i][1], tokens[i][0]);
}
return 0;
}
