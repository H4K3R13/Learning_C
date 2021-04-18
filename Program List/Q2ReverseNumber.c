#include<stdio.h>
void main()
{
  int a,remainder;
  reverse=0;
  printf("Enter A 5 Digit Number:\n");
  scanf("%d",&a)
  if(a < 100000 || a > 9999)
    {
      while(a!=0)
      {
        remainder=a%10;
        reverse=revserse*10+remainder;
        a/=10;
      }
     }
     else
     {
       printf("\n Error");
     }
    printf("Reversed number:%d",reverse);
}
