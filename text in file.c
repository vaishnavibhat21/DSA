#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    char ch;
    fp=fopen("sample.txt","w");
    if(fp=NULL)
    {
        printf("error in opening file");
        exit(0);
    }
    printf("KLETECH");
    while((ch=getchar())!=EOF)  //end of file=EOF
        fputc(ch,fp);
        fclose(fp);
    printf("the file contains");
    fp=fopen("sample.txt","r");
    while(ch=fgetc(fp) !=EOF)
        putchar(ch);
    fclose(fp);
}

