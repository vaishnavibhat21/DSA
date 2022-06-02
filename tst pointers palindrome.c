#include<stdio.h>
#include<string.h>
void palindrome(char a[]);
void main()
{
   char a[10];
   //scanf("%s",a);
   gets(a);
   printf("%s\n",a);
   palindrome(a);
   }

void palindrome(char a[10])
{
   int l=0,h=strlen(a)-1,flag=1;
   while(l<h)
   {
       if(a[l]!=a[h])
       {
           flag=0;
       break;
       }
   l++;
   h--;
   }
  if(flag==1)
    {
    printf("It is a palindrome\n");
    }
    else
    {
    printf("It is not a palindrome\n");
    }
}
