/*WAP to add two numbers using function
with arguments and return a value*/
#include<stdio.h>
int add(int,int);
int main()
{
int a,b,result;
printf("Enter two values= ");
scanf("%d%d",&a,&b);
result=add(a,b);
printf("sum= %d",result);
return 0;
}
int add(int x,int y)
{
int sum=x+y;
return sum;
}
