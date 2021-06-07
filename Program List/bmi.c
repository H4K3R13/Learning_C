/*The body mass index (BMI) is defined as the ratio of the weight of a person in kilograms 
to the square of the height in meters.Write a program that receives weight and height, 
calculates  the BMI and reports the BMI category as per the following table
*/
#include<stdio.h>
#include<math.h>
void main()
{
    float ratio,weight,height;
    printf("Enter Weigth(Kg) and Height(meter):");
    scanf("%f%f",&weight,&height);
    ratio=weight/(pow(height,2));
    if(ratio<15)
        printf("\nStarvation.");
    else if(ratio>=15.1 && ratio<=17.5)
    {
        printf("\nAnorexic");
    }
    else if(ratio>=17.6&& ratio<=18.5)
    {
        printf("\nUnderweight");
    }
    else if(ratio>=18.6&& ratio<=24.9)
    {
        printf("\nIdeal");
    }
    else if(ratio>=25 && ratio<=25.9)
    {
        printf("\nOverweight");
    }
    else if(ratio>=30 && ratio<=30.9)
    {
        printf("\nObese");
    }
    else if (ratio>=40)
        printf("\nMorbidly Obese");
}