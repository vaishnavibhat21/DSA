#include<stdio.h>
int reverse(int);
void main()
{
int n,s;
printf("enter the no\n");
scanf("%d",&n);
s=reverse(n);
printf("the reverse of the no is %d\n",s);
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
return rev;
}
