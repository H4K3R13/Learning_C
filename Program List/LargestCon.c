/*Using the Conditional operator, write a program
to determine the largest among three numbers.
*/
#include<stdio.h>
void main()
{
    int a,b,c,big;
    printf("\nEnter The Three Numbers:");
    scanf("%d%d%d",&a,&b,&c);
    big = a > b ? ( a > c ? a : c) : (b > c ? b : c) ;
    printf("\n%d IS Largest Number",big);
}