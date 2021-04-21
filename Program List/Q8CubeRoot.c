#include<stdio.h>
#include<math.h>
void main()
{
    int x
    printf("Enter the integer to find the cube root:  ");
    scanf("%d",&x);
    for(int i=0;i < N;i++)
      {
        if(i*i*i==x)
          {
            print("\nCube root of %d is %d:",x,i);
            exit();
          }
        else
          {
            print("\n Number is not a perfect cube.");
          }
      }
}
