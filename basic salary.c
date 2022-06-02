#include<stdio.h>
void main()
{
int exp,basic_salary,type,bonus;
printf("Enter the category\n");
scanf("%d",&type);
printf("Enter the basic_salary\n");
scanf("%d",&basic_salary);
printf("Enter the experience");
scanf("%d",&exp);
switch(type)
case 1:
if(exp>=1&&exp<=4)
{
    printf("no bonus");
}
else if(exp>=5&&exp<=7)
{
    bonus=0.1*basic_salary;
    printf("bonus=%f\n",bonus);
}
else if(exp>=8)
{
    bonus=0.2*basic_salary;
    printf("bonus=%f\n",bonus);
}
else
    printf("invalid experience\n");
}
