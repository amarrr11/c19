/*WAP to add two numbers using function
with no arguments and return a value*/
#include<stdio.h>
int add();
int main()
{
int result;
result=add();
printf("sum= %d",result);
return 0;
}
int add()
{
int a,b,sum;
printf("Enter two values= ");
scanf("%d%d",&a,&b);
sum=a+b;
return sum;
}
