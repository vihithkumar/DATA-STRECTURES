#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10];
	int i,j,d,e;
	printf("enter number of rows");
	scanf("%d" ,&d);
	printf("enter the number of columns");
	scanf("%d" ,&e);
	printf("enter the elements of 1st matrix" );
	
	for (i=0;i<d;i++)
	{
		for (j=0;j<e;j++)
	{
	scanf("%d" ,&a[i][j]);
	
		}
			}
	printf("enter the elements of second matrix");
	
	for (i=0;i<d;i++)
	{
		for (j=0;j<e;j++)
		{
			scanf("%d" ,&b[i][j]);
		}
	}

for (i=0;i<d;i++)
{
	for (j=0;j<e;j++)
	{
		c[i][j] = a[i][j] +b[i][j];
		printf("%d\t" ,c[i][j]);
	}
	printf("\n");
}
    return 0;  
}
