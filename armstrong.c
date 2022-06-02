#include<stdio.h>
#include<math.h>
void main()
{
int n,i,rem,sum=0,temp;
scanf("%d",&n);
temp=n;
for(sum=0;n!=0;n=n/10)
{
rem=n%10;
sum=sum+pow(rem,3);
}
if(sum==temp)
{
printf("armstrong number\n");
}
else
{
printf("it is not an armstrong number\n");
}
}
