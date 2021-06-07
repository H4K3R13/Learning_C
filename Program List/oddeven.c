/*Write a program to check whether the number is even or odd.
*/
#include<stdio.h>
void main()
{
    int num;
    printf("Enter The Number:");
    scanf("%d",&num);
    if(num%2==0)
        printf("\nEven Number.");
    else
        printf("\nOdd Number.");
}