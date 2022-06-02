#include<stdio.h>
void main()
{
   float weight,height,s,bmi;
   printf("Enter the weight in kilograms and height in meters\n",weight,height);
   scanf("%f%f",&weight,&height);
   s=height*height;
   bmi=(weight)/s;
   printf("The body mass index is %f\n",bmi);

   if(bmi<15)
   {
       printf("Starvation");
   }
   else if(bmi>=15.1 && bmi<=17.5)
   {
       printf("Anorexic");
       }
        else if(bmi>=17.6 && bmi<=18.5)
   {
       printf("Underweight");
       }
        else if(bmi>=18.6 && bmi<=24.9)
   {
       printf("Ideal");
       }
        else if(bmi>=25 && bmi<=29.9)
   {
       printf("Overweight");
       }
        else if(bmi>=30 && bmi<=39.9)
   {
       printf("Obese");
       }
       else
       {
           printf("Morbidly Obese");
       }
   }
