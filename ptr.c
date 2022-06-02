#include<stdio.h>
void main()
{
int p,t,r,i;
float a;
for(i=p;p>0;p=i)
{
      printf("Enter the principal amount\n",p);
      scanf("%d",&p);
      printf("Enter the rate of interest\n",r);
      scanf("%d",&r);
      printf("Enter the time period\n",t);
      scanf("%d",&t);
      a=(p*t*r)/100;
    printf("the amount is a =%f\n",a);
}
}
