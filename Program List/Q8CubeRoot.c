#include<stdio.h>
#include<math.h>
void main()
{
    int x,cube;
    printf("Enter the integer to find the cube root:  ");
    scanf("%d",&x);
    for(int i=0;i < x;i++)
      {
        cube=i*i*i;
        if(cube==x)
          {
            printf("\nCube root of %d is %d\n",x,i);
            break;
          }
        else if(cube>x)
          {
            printf("\n Number is not a perfect cube.\n");
            break;
          }
      }
}
