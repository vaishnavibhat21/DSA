#include<stdio.h>
int reverse(int);
void main()
{
int n,s;
printf("enter the no\n");
scanf("%d",&n);
reverse(n);
}
int reverse(int n)
{
int rem,rev=0;
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
printf("the reverse of the no is%d\n",rev);
}
