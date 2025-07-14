#include <stdio.h>
#include <string.h>
#include <ctype.h>

//function prototypes
void processExpression(const char* expression);
const char* getTokenType(const char* word);
const char* getSymbolType(const char* symbol, int prevIsIdentifier, int prevIsParenthesis);

//array to store tokens and their types
char tokenTable[100][2][100]; // tokenTable[i][0] holds token, tokenTable[i][1] holds token type
int tokenCount = 0; // total number of tokens

int main() {
    char inputExpression[1000];
    printf("Enter the input expression: ");
    fgets(inputExpression, sizeof(inputExpression), stdin);
    inputExpression[strcspn(inputExpression, "\n")] = '\0';

    processExpression(inputExpression);

    //display tokenized output
    printf("\n%-15s %s\n", "Token", "Lexeme");
    printf("------------------------------\n");
    for (int i = 0; i < tokenCount; i++) {
        printf("%-15s %s\n", tokenTable[i][1], tokenTable[i][0]);
    }

    return 0;
}

//function to tokenize the input expression
void processExpression(const char* expression) {
    char currentToken[50];
    int currentIndex = 0;
    int inString = 0;
    int prevIsIdentifier = 0; // track if previous token was identifier or constant
    int prevIsParenthesis = 0; // track if previous token was closing parenthesis

    for (int i = 0; i < strlen(expression); i++) {
        char ch = expression[i];

        //check if inside a string or character literal
        if (ch == '"') {
            if (inString) {
                currentToken[currentIndex++] = '"';
                currentToken[currentIndex] = '\0';
                strcpy(tokenTable[tokenCount][0], currentToken);
                strcpy(tokenTable[tokenCount][1], "STRING_LIT");
                tokenCount++;
                currentIndex = 0;
                inString = 0;
            } else {
                inString = 1;
                currentToken[currentIndex++] = '"';
            }
            continue;
        }

        if (ch == '\'') {
            if (inString) {
                currentToken[currentIndex++] = '\'';
                currentToken[currentIndex] = '\0';
                strcpy(tokenTable[tokenCount][0], currentToken);
                strcpy(tokenTable[tokenCount][1], "CHAR_LIT");
                tokenCount++;
                currentIndex = 0;
                inString = 0;
            } else {
                inString = 1;
                currentToken[currentIndex++] = '\'';
            }
            continue;
        }

        //continue adding characters if inside string/character literal
        if (inString) {
            currentToken[currentIndex++] = ch;
            continue;
        }

        //handle whitespace
        if (ch == ' ') {
            if (currentIndex > 0) {
                currentToken[currentIndex] = '\0';
                strcpy(tokenTable[tokenCount][0], currentToken); // store token
                strcpy(tokenTable[tokenCount][1], getTokenType(currentToken)); // store token type
                prevIsIdentifier = (strcmp(tokenTable[tokenCount][1], "IDENT") == 0 || strcmp(tokenTable[tokenCount][1], "INT_LIT") == 0 || strcmp(tokenTable[tokenCount][1], "FLOAT_LIT") == 0);
                prevIsParenthesis = (strcmp(tokenTable[tokenCount][1], "RIGHT_PAREN") == 0);
                tokenCount++;
                currentIndex = 0;
            }
        }
        //handle multi-character operators
        else if ((ch == '&' && expression[i+1] == '&') ||
                 (ch == '|' && expression[i+1] == '|') ||
                 (ch == '=' && expression[i+1] == '=') ||
                 (ch == '!' && expression[i+1] == '=')) {
            if (currentIndex > 0) {
                currentToken[currentIndex] = '\0';
                strcpy(tokenTable[tokenCount][0], currentToken);
                strcpy(tokenTable[tokenCount][1], getTokenType(currentToken));
                prevIsIdentifier = (strcmp(tokenTable[tokenCount][1], "IDENT") == 0 || strcmp(tokenTable[tokenCount][1], "INT_LIT") == 0 || strcmp(tokenTable[tokenCount][1], "FLOAT_LIT") == 0);
                prevIsParenthesis = (strcmp(tokenTable[tokenCount][1], "RIGHT_PAREN") == 0);
                tokenCount++;
                currentIndex = 0;
            }
            char symbol[3] = {ch, expression[i+1], '\0'};
            strcpy(tokenTable[tokenCount][0], symbol);
            strcpy(tokenTable[tokenCount][1], getSymbolType(symbol, prevIsIdentifier, prevIsParenthesis));
            tokenCount++;
            i++;
        }
        //handle single-character symbols, including * for multiply/dereference
        else if (strchr("=+-*/();{}[],&|!", ch) != NULL) {
            if (currentIndex > 0) {
                currentToken[currentIndex] = '\0';
                strcpy(tokenTable[tokenCount][0], currentToken);
                strcpy(tokenTable[tokenCount][1], getTokenType(currentToken));
                prevIsIdentifier = (strcmp(tokenTable[tokenCount][1], "IDENT") == 0 || strcmp(tokenTable[tokenCount][1], "INT_LIT") == 0 || strcmp(tokenTable[tokenCount][1], "FLOAT_LIT") == 0);
                prevIsParenthesis = (strcmp(tokenTable[tokenCount][1], "RIGHT_PAREN") == 0);
                tokenCount++;
                currentIndex = 0;
            }
            char symbol[2] = {ch, '\0'};
            strcpy(tokenTable[tokenCount][0], symbol);
            strcpy(tokenTable[tokenCount][1], getSymbolType(symbol, prevIsIdentifier, prevIsParenthesis));
            prevIsIdentifier = 0;
            prevIsParenthesis = (ch == ')');
            tokenCount++;
        }
        //continue building token if it's part of an identifier or constant
        else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') ||
                 (ch >= '0' && ch <= '9') || ch == '_' || ch == '.') {
            currentToken[currentIndex++] = ch;

            if (i == strlen(expression) - 1) {
                currentToken[currentIndex] = '\0';
                strcpy(tokenTable[tokenCount][0], currentToken);
                strcpy(tokenTable[tokenCount][1], getTokenType(currentToken));
                prevIsIdentifier = (strcmp(tokenTable[tokenCount][1], "IDENT") == 0 || strcmp(tokenTable[tokenCount][1], "INT_LIT") == 0 || strcmp(tokenTable[tokenCount][1], "FLOAT_LIT") == 0);
                prevIsParenthesis = (strcmp(tokenTable[tokenCount][1], "RIGHT_PAREN") == 0);
                tokenCount++;
            }
        }
    }
}

//list of C keywords
const char* cKeywords[] = {
    "void", "int", "float", "double", "long", "short", "char", "if", "else", "for", "do", "while", "return",
    "auto", "break", "switch", "case", "const", "continue", "default", "goto", "sizeof", "static", "struct",
    "register", "signed", "enum", "typedef", "union", "unsigned", "volatile", "extern", "scanf"
};

//function to determine the type of a given token
const char* getTokenType(const char* word) {
    //check if token is a keyword
    for (int i = 0; i < sizeof(cKeywords) / sizeof(cKeywords[0]); i++) {
        if (strcmp(cKeywords[i], word) == 0)
            return "C_KEYWORD";
    }

    //check if token is an integer or float constant
    if (isdigit(word[0])) {
        if (strchr(word, '.')) {
            return "FLOAT_LIT";// float literal
        }
        return "INT_LIT";// integer literal
    }

    //check if token is a string or character literal
    if (word[0] == '"' && word[strlen(word) - 1] == '"') {
        return "STRING_LIT";
    }

    if (word[0] == '\'' && word[strlen(word) - 1] == '\'') {
        return "CHAR_LIT";
    }

    //default to identifier if no other type matches
    return "IDENT";
}

//function for symbol type detection
const char* getSymbolType(const char* symbol, int prevIsIdentifier, int prevIsParenthesis) {
    if (strcmp(symbol, "*") == 0) {
        return (prevIsIdentifier || prevIsParenthesis) ? "MULTIPLY_OP" : "DEREF_OP";
    }
    if (strcmp(symbol, "&") == 0) {
        return prevIsIdentifier ? "BITWISE_AND_OP" : "ADDRESS_OP";
    }
    if (strcmp(symbol, "&&") == 0) return "LOGIC_AND_OP";
    if (strcmp(symbol, "||") == 0) return "LOGIC_OR_OP";
    if (strcmp(symbol, "!") == 0) return "NOT_OP";
    if (strcmp(symbol, "!=") == 0) return "NOT_EQUAL_OP";
    if (strcmp(symbol, "==") == 0) return "EQUAL_OP";

    switch (symbol[0]) {
        case '=': return "ASSIGN_OP";
        case '+': return "ADD_OP";
        case '-': return "SUB_OP";
        case '/': return "DIV_OP";
        case '(': return "LEFT_PAREN";
        case ')': return "RIGHT_PAREN";
        case '{': return "LEFT_BRACE";
        case '}': return "RIGHT_BRACE";
        case '[': return "LEFT_BRACKET";
        case ']': return "RIGHT_BRACKET";
        case ';': return "SEMICOLON";
        case ',': return "COMMA";
        case '|': return "BITWISE_OR_OP";
        default:  return "SPECIAL_SYMBOL";
    }
}
