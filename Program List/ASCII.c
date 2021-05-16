/*If a character is entered through the keyboard, write a 
program to determine whether the character is a capital letter, small letter, 
a digit or a 	special symbol.
*/
#include<stdio.h>
void main()
{
    char ch;
    int i;
    printf("Enter A Character To Check:\n");
    scanf("%c",&ch);
    i=ch;
    if(i>=65 && i<=90)
        printf("\nEntered character is capital letter. ");
    else if(i>=97 && i<=122)
        printf("\nEntered Character is small letter.");
    else if (i>=48 && i<=57)
        printf("\nEntered Character is digit.");
    else if ((i>=0 && i<=47) || (i>=58 && i<=64) || (i>=91 && i<=96) || (i>=123 && i<=127))
        printf("\nEntered Character is Special Character.");
    else 
        printf("\n Error.");
}

