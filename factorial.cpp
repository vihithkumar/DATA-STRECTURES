#include<stdio.h>
int main()
{
	int a,i;
	int d=1;
	printf("enter a number\n");
	scanf("%d" ,&a);
	for (i=1;i<=a;i++)
	{
	d=d*i;	
	}
	printf("the factorial is %d" ,d);
	return 0;
	}
