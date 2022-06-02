/*Pythagorean triples*/
#include<stdio.h>

void main()
{
   int m,n;
   float side1,side2,h,hypotenuse;
   printf("Enter the length of the sides\n");
   scanf("%d%d",&m,&n);
   side1=(m*m)-(n*n);
   side2=2*m*n;
   h=(m*m)+(n*n);
   printf("The pythagorean triple is %f  ,%f and %f",side1,side2,h);
   }
