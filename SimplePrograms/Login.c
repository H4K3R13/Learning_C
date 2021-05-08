#include<stdio.h>
#include<string.h>
void main()
{
  char u[20],p[20];
  printf("LOGIN SCREEN>>>\n");
  printf("\tEnter Username>>>\n");
  scanf("%s",u);
  printf("\tEnter Password>>>\n");
  scanf("%s",p);
    if((strcmp(u,"user1")==0) && (strcmp(p,"pass1")==0))
      {
        printf("Welcome To Programe %s\n",u);
      }
    else
      {
        printf("Invalid Login\n");
      }
  printf("\n\n");

}
