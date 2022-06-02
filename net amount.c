#include<stdio.h>
void main()

{
    int amount;
    float discount,net_amount;
    printf("Enter the purchase amount\n",amount);
    scanf("%d",&amount);

   if(amount>0 && amount<=100)
   {
   printf("No discount\n ");
   printf("The net amount to be paid is %d",amount);
   }

    else if(amount>=101 && amount<=200)
   {
       discount=amount*0.05;
       net_amount=amount-discount;
       printf("The net amount to be paid is %f",net_amount);
   }
   else if(amount>=201 && amount<=300)
   {
       discount=amount*0.075;
       net_amount=amount-discount;
       printf("The net amount to be paid is %f",net_amount);
   }

   else
    { discount=amount*0.1;
       net_amount=amount-discount;
       printf("The net amount to be paid is %f",net_amount);
   }

    }
