#include<stdio.h>
void main()
{
    float a=10,b=20;
    float *p,*q;//Declaration of pointers
    
    p=&a; //Initialization of pointers
    q=&b; //Initialization of pointers
    
    printf("%u\n",&a); //Print Address
    printf("%u\n",p); //Print Address
    printf("%u\n",&b); //Print Address
    printf("%u\n",q); //Print Address

    printf("%f\n",a);  // Prints The Value 
    printf("%f\n",*(&a)); // Prints The Value 
    printf("%f\n",*p); // Prints The Value 
    
    printf("%f\n",b);  // Prints The Value 
    printf("%f\n",*(&b)); // Prints The Value 
    printf("%f\n",*q); // Prints The Value 

}