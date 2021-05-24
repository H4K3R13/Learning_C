/*Two numbers are entered through the keyboard. 
Write a program to find the value of one number raised to the power of the other.
*/
#include<stdio.h>
void main()
{
    int a,b,pow;
    printf("\nEnter Numbers:\n");
    scanf("%d%d",&a,&b);
    for(int i=0;i<b;i++)
        pow=a*a;
    printf("\n%d Is The Power.",pow);

}