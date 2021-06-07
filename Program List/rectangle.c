/*Given the length and breadth of a rectangle, 
write a program to find whether the area of the rectangle is greater than its perimeter.
*/
#include<stdio.h>
void main()
{
    float lenght,breadth,area,perimeter;
    printf("Enter The Lenght and Breadth of Rectangle:");
    scanf("%f%f",&lenght,&breadth);
    area=lenght*breadth;
    perimeter=2*(lenght+breadth);
    printf("\nArea:%f and Perimeter:%f",area,perimeter);
    
}