#include<stdio.h>
int main()
{
 char a[10];
 int lenght=0,i;
 printf("\nEnter Your Name:");
 scanf("%s",a);
 for(i=0;a[i]!='\0';i++)
    {
    lenght++;
    }
  printf("\nLenght Of Your Name Is:%d",lenght);
  return (0);
}
