/*the area of triangle when 3 sides are given*/
#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c;
float s,area;
printf("Enter the length of the sides\n");
scanf("%d%d%d",&a,&b,&c);
s=(a+b+c)/2.0;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("The area of the triangle=%f",area);
}
