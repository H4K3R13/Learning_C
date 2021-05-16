/* A year is entered through the keyboard. Write a program to 
determine whether the year is leap year or not. 
Use logical operators && and ||.
*/
#include<stdio.h>
void main()
{
    int year;
    printf("\nProgram To Check Entered Year Is Leap Or Not");
    printf("\nEnter The Year:");
    scanf("%d",&year);
    if((year%400==0)||(year%4==0))
        printf("%d is a leap year",year);
    else 
        printf("%d is not a leap year",year);
}
