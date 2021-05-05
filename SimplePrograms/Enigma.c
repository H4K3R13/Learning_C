#include<stdio.h>
void main()
{
  char a[20];
  int lenght,i;
  printf("\nEnter A Word: ");
  scanf("%s",a);
  for(i=0;a[i]!='\0';i++)
    {
    lenght++;
    }
  printf("\nLenght Of Your Name Is:%d",lenght);
  for(i=0;i<lenght;i++)
    {
      a[i]=a[i]+2;
    }
  printf("\nEncoded Word is:%s",a);
}
