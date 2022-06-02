#include<stdio.h>
void main()
{
  int rem1,rem2,rem3,highest3=0,n1,n2,n3,highest1=0,highest2=0,temp1,temp2,temp3;
  printf("Enter the number\n");
  scanf("%d",&n1);
  printf("Enter the number\n");
  scanf("%d",&n2);
  printf("Enter the number\n");
  scanf("%d",&n3);

temp1=n1;
temp2=n2;
temp3=n3;

  while(n1!=0)
  {
     rem1=n1%10;
     if(rem1>=highest1)
     {
       highest1=rem1;
       }
       n1=n1/10;
       }
       printf("highest digit of the number %d is %d\n",temp1,highest1);


   while(n2!=0)
  {
     rem2=n2%10;
     if(rem2>=highest2)
     {
       highest2=rem2;
       }
       n2=n2/10;
       }
       printf("highest digit of the number %d is %d\n",temp2,highest2);


   while(n3!=0)
  {
     rem3=n3%10;
     if(rem3>=highest3)
     {
       highest3=rem3;
       }
       n3=n3/10;
       }
       printf("highest digit of the number %d is %d\n",temp3,highest3);


       if(highest1>=highest2 && highest1>=highest3)
         {
             printf("The highest digit is %d\n",highest1);
         }
      else if( highest2>=highest1 && highest2>=highest3)
      {
          printf("highest digit is %d\n",highest2);
      }
      else
      {
          printf("highest digit is %d\n",highest3);
      }
       }
