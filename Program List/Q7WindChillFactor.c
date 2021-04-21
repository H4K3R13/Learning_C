#include<stdio.h>
#include<math.h>
void main()
{
    float t,v,wcf;
    printf("Enter air temperature in Fahrenheit: "); //temperature in Fahrenheit
    scanf("%f",&t);
    printf("\nEnter the wind speed in mph: " ); // speed in mph
    scanf("%f",&v);
    wcf=35.74 + 0.6215*t + (0.4275*t - 35.75) *pow(v,0.16); //calculation
    printf("Wind Chill Factor in Fahrenheit: %f",wcf);
}
