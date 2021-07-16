#include<stdio.h>
int main()
{
  FILE *f;
  int a[10][10],b[10][10],m,n,i,j;
  f=fopen("matrixqstn.txt","r");
  fscanf(f,"%d%d",&m,&n);
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      fscanf(f,"%d\t",&a[i][j]);
    }
    fprintf(f,"\n");
  }
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      fscanf(f,"%d\t",&b[i][j]);
    }
    fprintf(f,"\n");
  }
  fclose(f);
  f=fopen("matrixans.txt","a");
  fprintf(f,"FIRST MATRIX\n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      fprintf(f,"%d\t",a[i][j]);
    }
    fprintf(f,"\n");
  }
  fprintf(f,"SECOND MATRIX\n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      fprintf(f,"%d\t",b[i][j]);
    }
    fprintf(f,"\n");
  }
  fprintf(f,"***SUM***\n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      fprintf(f,"%d\t",a[i][j]+b[i][j]);
    }
    fprintf(f,"\n");
  }
  fclose(f);
}
