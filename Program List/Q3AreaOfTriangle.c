#include <stdio.h>
#include <math.h>
void main()
{
   int a,b,c,s;
   float area;
   printf("Find area of triangle\n ");
   printf("Enter the sides of triangle:\n");
   scanf("%d%d%d",&a,&b,&c);
   s=(a+b+c)/2;
   area=sqrt(s*(s-a)*(s-b)*(s-c));
   printf("\nArea of triangle:%f ",area);
}
