#include<stdio.h>
void main()
{
  int a,sum;
  sum=0;
  printf("Enter A 5 Digit Number:\n");
  scanf("%d",a)
  if(a < 100000 || a > 9999)
    {
      while(a!=0)
      {
        sum=sum+a%10;
        n=n/10;
      }
     }
     else
     {
       printf("\n Error");
     }
    printf("Sum of digits:%d",sum);
}
