#include "stdio.h"
void swapping(float* a,float* b)
{float t=*a;
*a=*b;
*b=t;

}
int main()
{float a,b;
printf("Enter value of a:");
fflush(stdout);
scanf("%f",&a);
printf("Enter value of b:");
fflush(stdout);
scanf("%f",&b);
swapping(&a,&b);
printf("After swapping, value of a = %0.2f\n",a);
fflush(stdout);
printf("After swapping, value of b = %0.2f\n",b);
fflush(stdout);


}
