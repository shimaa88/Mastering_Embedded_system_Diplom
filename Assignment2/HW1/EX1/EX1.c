#include "stdio.h"


int main()
{float arr1[2][2];
float arr2[2][2];
float sum[2][2];
printf("Enter the element of 1st matrix\n");
fflush(stdout);
for(int i=0;i<2;i++)
{
	for(int j=0;j<2;j++)
{       printf("Enter a%d%d: ",i,j);
        fflush(stdout);
		scanf("%f",&arr1[i][j]);


}

}
printf("Enter the element of 2nd matrix\n");
fflush(stdout);
for(int i=0;i<2;i++)
{
	for(int j=0;j<2;j++)
{       printf("Enter b%d%d: ",i,j);
        fflush(stdout);
		scanf("%f",&arr2[i][j]);

}

}
for(int i=0;i<2;i++)
{for(int j=0;j<2;j++)
{sum[i][j]=(arr1[i][j]+arr2[i][j]);
}
}

printf("Sum of matrix:\n");
fflush(stdout);
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{  printf("%0.2f\t",sum[i][j]);
    fflush(stdout);

}
printf("\n");

}

}
