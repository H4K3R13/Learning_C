/*If the cost price and selling price of an item are input through the keyboard, 
write a program to determine whether the seller has made profit or incurred loss.
 Also determine how much profit he made or loss he incurred
 */
#include<stdio.h>
void main()
{
    float cost,selling,x;
    printf("\nEnter Cost Price And Selling Price.");
    scanf("%f%f",&cost,&selling);
    if(selling>cost)
        {
            x=selling-cost;
            printf("\nHas Profit of %f",x);
        }
    else
    {
        x=cost-selling;
        printf("\nHas Loss of %f",x);
    }
    
}