#include<stdio.h>
void main()
{
    int phy,che,math,per;
    printf("Enter Marks of Physics,Chemistry,Mathematics(Out Of 100):\n");
    scanf("%d%d%d",&phy,&che,&math);
    per=(phy+che+math)/3;
    if(per>=80)
        printf("\nDistinction\n");
    else if (per>=60 && per<80)
        printf("\nFirst Class\n");
    else if (per>=50 && per<60)
        printf("\nSecond Class\n");
    else if (per>=40 && per<50)
         printf("\nThird Class\n");
    else if (per<40)
        printf("\nFailed\n");
}