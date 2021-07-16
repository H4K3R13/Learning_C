#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    int sum=0,i;
    for(i=1;i<argc;i++)
    {
        if((atoi(argv[i])%400)==0)
            {
                printf(" Leap year");
            }
        else if((atoi(argv[i])%100)==0)
            {
                printf("Leap year");
            }
        else if((atoi(argv[i])%4)==0)
            {
                printf("Leap year");
            }
        else
        {
            printf("Not Leap year");
        }
        
    }
    
}