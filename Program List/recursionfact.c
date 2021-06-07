#include<stdio.h>
int findfact(int);
void main()
{
    int n,fact;
    printf("Enter Number:");
    scanf("%d",&n);
    fact=findfact(n);
    printf("%d ! = %d\n",n,fact);
}
int findfact(int n)
{
    return (n==1)?1:n*findfact(n-1);
}