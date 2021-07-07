#include<stdio.h>
int main()
{
    FILE *f;
    char c;
    f=fopen("file1","w");
    c=getchar();
    putc(c,f);
    fclose(f);
}