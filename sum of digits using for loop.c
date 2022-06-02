#include<stdio.h>
void main()
{
int i,n,sum=0,rem;
scanf("%d",&n);
for(i=0;i<n;n=n/10)
{
rem=n%10;
sum=sum+rem;
}
printf("sum=%d\n",sum);
}
