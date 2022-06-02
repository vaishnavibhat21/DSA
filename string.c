#include<stdio.h>
#include<string.h>
int stringlen(char[]);
void main()
{
    char str[15];
    int len;
    scanf("%s",str);
    len=stringlength(str);
    printf("length of the string=%d\n",len);
}
int stringlength(char str[])
{
    int count=0,i=0;
    while(str[i]!=0)
    {
        count++;
        i++;
    }
    return count;
}

