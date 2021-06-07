#include<stdio.h>
int fib(int);
int main()
{
    int n;
    printf("Enter How Many Fibonacci Number:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("%d\t",fib(i));
    }
}

int fib(int i)
{
    return (i==0 || i==1) ? 1 : fib(i-1)+fib(i-2);
    
}