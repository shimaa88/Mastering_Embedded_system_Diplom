#include "stdio.h"
#define SIZE   100
int main()
{float arr[SIZE],sum=0;
int n;
printf("Enter the number of data");
fflush(stdout);
scanf("%d",&n);
for(int i=0;i<n;i++)
{

	printf("%d.Enter number: ",i+1);
	fflush(stdout);
	scanf("%f",&arr[i]);
 sum+=arr[i];
}

printf("Average:%f",sum/n);
	fflush(stdout);

}
