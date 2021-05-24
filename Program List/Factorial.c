/*Write a program to find the factorial of a number.
*/
#include<stdio.h>
void main()
{
    int num,fact=1;
    printf("Enter The Number:\n");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
        fact=fact*i;
    printf("\n%d is Factorial.",fact);
}