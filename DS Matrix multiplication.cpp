#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],n,i,j,k;
	printf("Enter the value of N (N<=10):");
	scanf("%d",&n);
	printf("Enter the elements of matrix-A:\n");
	for(i=0;i<n;i++){
		for (j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the elements of matrix-B:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for (i=0;i<n;i++){
		for(j=0;j<n;j++){
			b[i][j]=0;
			for(k=0;k<n;k++){
				b[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	printf("The product of the two matrices is:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}