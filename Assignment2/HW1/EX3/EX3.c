#include "stdio.h"

#define SIZE   20
	int main()
	{int arr[SIZE][SIZE];
	int t[SIZE][SIZE];
	int r,c;
	printf("Enter rows and columns of matrix:");
	fflush(stdout);
	scanf("%d%d",&r,&c);
	printf("Enter elements of matrix:");
	fflush(stdout);
	for(int i=0;i<r;i++)
	{for(int j=0;j<c;j++)
	{
		printf("Enter elements a%d%d: ",i,j);
		fflush(stdout);
		scanf("%d",&arr[i][j]);

	}}

		for(int i=0;i<r;i++)
		{for(int j=0;j<c;j++)
		{
			t[j][i]=arr[i][j];
		}}

		printf("Entered  Matrix\n");
					fflush(stdout);
						for(int i=0;i<r;i++)
						{for(int j=0;j<c;j++)
						{
							printf("%d\t",arr[i][j]);
							fflush(stdout);

						}printf("\n");
						fflush(stdout);}



		printf("Transpose of Matrix\n");
			fflush(stdout);
				for(int i=0;i<c;i++)
				{for(int j=0;j<r;j++)
				{
					printf("%d\t",t[i][j]);
					fflush(stdout);


				}printf("\n");
				fflush(stdout);}


	}

