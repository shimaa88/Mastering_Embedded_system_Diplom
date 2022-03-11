#include"stdio.h"
#define SIZE   20
 int main()
{int arr1[SIZE];
int n,k,ii;
printf("Enter no of elements:");
fflush(stdout);
scanf("%d",&n);
for(int i=0;i<n;i++)
{
	scanf("%d",&arr1[i]);
}
printf("Enter the element to be searched:");
fflush(stdout);
scanf("%d",&k);
for(int i=0;i<k;i++)
{if(arr1[i]==k)
{ii=i+1;
printf("Number found at the location = %d",ii);
break;}


}}


