/*Write a program to calculate overtime pay of 10 employees. 
Overtime is paid at a rate of Rs. 12.00 per hour for every hour worked above 40 hours. 
Assume that employees do not work for a fractional part of an hour. 
*/
#include<stdio.h>
void main()
{
    int hr,amt;
    printf("Enter Number Of Hours:\n");
    scanf("%d",&hr);
    if(hr<40)
        printf("\nNo Overtime Pay.");
    else
    {
        amt=(hr-40)*12;
        printf("\nOvertime Amount : %d",amt);
    }    
    
}