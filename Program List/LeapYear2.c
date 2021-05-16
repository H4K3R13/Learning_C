/*Write a program using conditional operator 
to determine whether a year entered through the 
keyboard is a leap year or not.
*/
#include<stdio.h>
void main()
{
    int year;
    printf("\nProgram To Check Entered Year Is Leap Or Not");
    printf("\nEnter The Year:");
    scanf("%d",&year);
      (year%4==0 && year%100!=0) ? printf("Leap Year"):(year%400 ==0 ) ? printf("Leap Year") : printf("not a leap year");

}