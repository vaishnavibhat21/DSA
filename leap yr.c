#include<stdio.h>
void main()

{
   char c;
   printf("Whether the year is divisible by 100\n",c);
   scanf("%c",&c);
   int year;

   printf("Enter the year\n",year);
   scanf("%d",&year);



    switch(c)
   {
    case'y':if(year%4==0  && year%400==0)
   {printf("The entered year is leap year\n");
   }

   else if(year%4==0 )
   {
       printf("The entered year is not a leap year\n");
   }

   else
   {
       printf("Invalid input\n");
   }
   break;


    case'n':if(year%4==0)
    {
        printf("The entered year is a leap year\n");
    }
    else if(year%4<0 || year%4>0)
         {
             printf("The entered year is not a leap year\n");
         }
    else
    {
        printf("Invalid input\n");
    }
    break;
}
}
