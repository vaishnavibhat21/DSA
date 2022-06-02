#include<stdio.h>
void main()
{
int N,rem,sum=0;
printf("Enter the numbers\n");
scanf("%d",&N);
while(N!=0)
{
rem=N%10;
sum=sum+rem;
N=N/10;
}
printf("sum of the digits of the numbers=%d\n",sum);
}
