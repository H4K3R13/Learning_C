/*
Write a program to generate all combinations of 1, 2 and 3 using for loop
*/
#include<stdio.h>
void main()
{
        int i,j,k;
        printf("\nHello");

        for(i=1;i<=3;i++)
            {
                for(j=1;j<=3;i++)
                    {
                    for(k=1;k<=3;i++)
                        {
                            if( i != j && i != k && j != k)  
                                printf("%d %d %d\n", i, j, k);  
                        }
                   
                    }
            }

}
