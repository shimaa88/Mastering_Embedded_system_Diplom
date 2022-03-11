#include "stdio.h"
#define SIZE   50
int main()
{int arr1[SIZE],arr2[SIZE];
int n,k,l;
printf("Enter no of elements:");
fflush(stdout);
scanf("%d",&n);
for(int i=0;i<n;i++)
{
	scanf("%d",&arr1[i]);
}
printf("Enter the element to be inserted:");
fflush(stdout);
scanf("%d",&k);
printf("Enter the location:");
fflush(stdout);
scanf("%d",&l);
for(int i=0,j=0;j<k;i++,j++)
{if(j==(l-1))
{arr2[j]=k;
j++;
arr2[j]=arr1[i];
 }
else arr2[j]=arr1[i];
}

for(int i=0;i<k;i++)
{printf("%d ",arr2[i]);
}


}
