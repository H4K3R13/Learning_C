#include<stdio.h>
void main()
{
int x,y,z;
printf("Enter 3 Numbers");
scanf("%d%d%d",&x,&y,&z);
if(x>y)
{
  if(x>z)
  {
    printf("\n%d is the greatest number",x);
  }
  else
  {
    printf("\n%d is the greatest number",z);
  }
}
else if(y>z)
  printf("\n%d is the greatest number",y);
else
  printf("\n%d is the greatest number",z);
}
