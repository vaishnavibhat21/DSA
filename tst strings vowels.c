#include<stdio.h>
#include<string.h>
void count(char a[]);
void main()
{
   char a[100];
   gets(a);
   puts(a);
   count(a);
   }

void count(char a[100])
{
  int vowels=0,special=0,consonants=0,i;
  for(i=0;i<strlen(a);i++)
  {
     if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o'|| a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
      {
      vowels++;
      }

      else if(a[i]=='\n'||a[i]=='\t' )
      {
       special++;
      }
    else
    {
     consonants++;
    }

  }
   printf("vowels=%d\nconsonants=%d\nspecial characters=%d\n",vowels,consonants,special);

}
