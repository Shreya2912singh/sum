#include<stdio.h>
int sum(int);
int main()
{
 int n,res;
 printf("Input a number ");
 scanf("%d",&n);
 res=sum(n);
 printf("sum of digits of %d is %d",n,res);
 return 0;
}
int  sum(int n)
{
 if(n==0)
 { 
  return 0;
 }
 else
 {
  return (n%10+sum(n/10));
 }
}
