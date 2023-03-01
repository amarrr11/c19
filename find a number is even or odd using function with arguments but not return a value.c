/*WAP to find a number is even or odd using function
with arguments but not return a value*/
#include<stdio.h>
void fn(int);
int main()
{
int n;
printf("Enter n= ");
scanf("%d",&n);
fn(n);
return 0;
}
void fn(int i)
{
if(i%2==0)
printf("Its Even");
else
printf("Its odd");
}
