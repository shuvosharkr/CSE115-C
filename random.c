#include<stdio.h>/*If a five-digit number is input , write a program to print summation
of all digits in the number.*/
int main(void)
{
    int input_number, first_quo, second_quo, third_quo, forth_quo, sum;

    int ones, tens, hundreds, thousands, ten_thousands;

    printf("Input the five digit number : ");

    scanf("%d", &input_number); //input 5 digit number.

    ones = input_number % 10;
    first_quo = input_number / 10;
    tens = first_quo % 10;
    second_quo = first_quo / 10;
    hundreds = second_quo % 10;
    third_quo = second_quo / 10;
    thousands = third_quo % 10;
    forth_quo = third_quo / 10;
    ten_thousands = forth_quo;

    sum = ten_thousands + thousands + hundreds + tens + ones;

printf("The sum of the digits of the input number: %d + %d + %d + %d + %d = %d", ten_thousands, thousands, hundreds, tens, ones, sum);
getch();
}
