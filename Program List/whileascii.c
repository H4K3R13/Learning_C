/*Write a program to print all ASCII values and their equivalent 
characters using a while loop.
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    char ascii;
    int i;

    for(i=0;i<=255;i++)
    {
        printf("%c = %d\n", i, i);
    }
}