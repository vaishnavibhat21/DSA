#include<stdio.h>
void sum(int,int);
void main()
{
int a,b;
printf("enter two values\n");
scanf("%d%d",&a,&b);
sum(a,b);
}
void sum(int x,int y)
{
    int z;
    z=x+y;
    printf("sum=%d",z);
}
