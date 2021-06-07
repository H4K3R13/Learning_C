/*Write a program to check whether a triangle is valid or not, 
when the three angles of the triangle are entered through the keyboard. 
A triangle is valid if the sum of all the three angles is equal to 180 degrees.
*/
#include<stdio.h>
void main()
{
    int x,y,z,total;
    printf("Enter The Angles:\n");
    scanf("%d%d%d",&x,&y,&z);
    total=x+y+z;
    if(total==180)
        printf("Triangle is valid");
    else
        printf("\nNot A Triangle");
    
}
