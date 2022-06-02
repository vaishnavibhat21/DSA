#include<stdio.h>
void main()
{
int days;
float fine;
scanf("%d",&days);
if(days>=1&&days<=5)
{
fine=days*0.5;
printf("fine is=%f",fine);
}
else if(days>5&&days<=10)
{
fine=5*0.5+(days-5)*1;
printf("fine is=%f",fine);
}
else if(days>10&&days<=30)
{
fine=5*0.5+5*1+(days-10)*5;
printf("fine is=%f",fine);
}
else
{
printf("your membership has been canceled");
}
}
