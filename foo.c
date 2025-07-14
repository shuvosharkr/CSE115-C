#include<stdio.h>

int foo();
int main(void) {
int y;
y = foo(); // y = ?
printf("%d", y);
y = foo(); // y = ?
printf("%d", y);
y = foo(); // y = ?
printf("%d", y);
while(1);
}
int foo() {
static int x = 5;
x = x + 1;
return x;
}
