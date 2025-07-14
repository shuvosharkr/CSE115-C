#include<stdio.h>
int fibonacci(int n)
{
    if(n==0||n==1)
        {
            return n;
        }
    else
    {
        return fibonacci(n-1)+fibonacci(n-2);
    }

}
int main()
{
    int Term1=5 ,Term2=10;

    printf("5th  term of the fibonacci series : %d\n",fibonacci(Term1));

    printf("10th term of the fibonacci series : %d\n",fibonacci(Term2));

    return 0;
}
