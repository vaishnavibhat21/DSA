#include<stdio.h>
#include<string.h>
int stringlength(char[]);
void main()
{
 char str[15];
 int len;
 scanf("%s",str);
 len=stringlength(str);
 printf("%d",len);
 }

 int stringlength(char str[])
 {
   int i=0,count=0,a[15];
   while(str[i]!='\0')
   {
     count++;
     i++;
     }
     return count;

   }
