/*
Write a program to print the multiplication table (up to 20) of the number entered by the user. 
The table should be displayed in the following form
1 x 9 = 9
2 x 9 = 18
3 x 9 = 27
…
20 x 9 = 180
*/
#include<stdio.h>
void main()
{
    int num,i,ans;
    printf("\nEnter a number to display multiplication table (up to 20):\n");
    scanf("%d",&num);
    if(num<=20)
        {
            for(i=1;i<=20;i++)
                {
                    ans=i*num;
                    printf("\n%d x %d = %d",num,i,ans);
                }
                
        }
    else
    {
            printf("\nError");
    }
    
}