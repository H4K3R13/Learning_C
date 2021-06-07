/*Write a program to find the absolute value of a number entered through the keyboard 
(Do not use math functions).
*/
#include<stdio.h>
void main()
{
    int num;
    printf("Enter The Number");
    scanf("%d",&num);
    if(num<0)
        num=-1*num;
    printf("\nAbsolute Number is %d",num);
}
