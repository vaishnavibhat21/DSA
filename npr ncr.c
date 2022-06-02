#include<stdio.h>
int factorial(int);
void main()
{
int n,r,ans;
printf("enter the n and r");
scanf("%d%d",&n,&r);
ans=factorial(n)/factorial(n-r)*factorial(r);
printf("ans %d",ans);
}int factorial(int n)
{
int i,fact=1;
for(i=1;i<=n;i++)
{
fact=fact*i;
}
return fact;
}
