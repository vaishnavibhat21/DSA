#include<stdio.h>
void main()
{
int N,i,sum=0;
printf("Enter the value of N\n");
scanf("%d",&N);
i=1;
while(i<=N)
{
sum=sum+i;
i++;
}
printf("sum=%d\n",sum);
}
