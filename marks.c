/*aggregate marks and percentage marks*/
#include<stdio.h>
void main()
{
int a,b,c,d,e;
float total,percentage_marks;
printf("Enter the marks\n");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
total=a+b+c+d+e;
percentage_marks=(total/500)*100;
printf("the aggregate and percentage_marks=%f\t%f",total,percentage_marks);
}
