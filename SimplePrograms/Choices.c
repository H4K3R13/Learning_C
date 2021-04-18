#include<stdio.h>

#include<stdlib.h>

void main()

{

  printf("Compute Two Digits");

  printf("Choose Your Option \n 1:Addtion \n 2:Substraction \n 3:Multiplication \n 4:Divison");

  int c;

  float x,y,z;

  printf("\nEnter Your Choice :");

  scanf("%d",&c);

  if(c==1)

  {

    printf("\nEnter The First Digit : ");

    scanf("%f%f",&x,&y);

    z=x+y;

  }

  else if(c==2)

  {

    printf("\nEnter The First Digit : ");

    scanf("%f%f",&x,&y);

    z=x-y;

  }

  else if(c==3)

  {

    printf("\nEnter The First Digit : ");

    scanf("%f%f",&x,&y);

    z=x*y;

  }

  else if(c==4)

  {

    printf("\nEnter The First Digit : ");

    scanf("%f%f",&x,&y);

    z=x/y;

  }

  else

  {

    printf("Worng Choice");

    exit(0);

  }

  printf("Sum of %f and %f is %f \n",x,y,z);

}
