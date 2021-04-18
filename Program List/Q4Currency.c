#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter A Number:\n");
	scanf("%d",&a);
	b=a/100;
	a=a%100;
	printf("%d X 100\n",b);
	b=a/50;
	a=a%50;
	printf("%d X 50\n",b);
	b=a/20;
	a=a%20;
	printf("%d X 20\n",b);
	b=a/10;
	a=a%10;
	printf("%d X 10\n",b);
	b=a/5;
	a=a%5;
	printf("%d X 5\n",b);
	b=a/2;
	a=a%2;
	printf("%d X 2\n",b);
	b=a/1;
	a=a%1;
	printf("%d X 1\n",b);
}
