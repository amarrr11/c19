/*WAP to add two numbers using function
with no arguments and no return value*/
#include<stdio.h>
void add();
int main()
{
add();
return 0;
}
void add(a,b,sum)
{
printf("Enter two values= ");
scanf("%d%d",&a,&b);
sum=a+b;
printf("sum= %d",sum);
}
