/*WAP to add two numbers using function
with arguments but not return a value*/
#include<stdio.h>
void add(int,int);
int main()
{
int a,b,sum;
printf("Enter two values= ");
scanf("%d%d",&a,&b);
add(a,b);
return 0;
}
void add(int x,int y)
{
int sum=x+y;
printf("sum= %d",sum);
}
