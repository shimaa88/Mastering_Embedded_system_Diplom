#include "stdio.h"
float calc(float n1,float n2,char p)
{switch(p)
{case '+':{return n1+n2;}
break;
case '-':{return n1-n2;}
break;
case '*':{return n1*n2;}
break;
case '/':{if (n2!=0)return n1/n2;
else {printf("error"); return 0;}}
break;
default:return 0;break;
}}
int main()
{float num1,num2;
char op;
printf("Enter operator either + or - or * or divide :");
fflush(stdout);
scanf("%c",&op);
printf("Enter two operands  :");
fflush(stdout);
scanf("%f %f",&num1,&num2);
printf("%f %c %f=%f",num1,op,num2,calc(num1,num2,op));
}
