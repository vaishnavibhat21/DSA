#include<stdio.h>
void readarray(int a[10][10],int,int);
void printarray(int a[10][10],int,int);
void addition(int a[10][10],int b[10][10],int,int);
void main()
{
int a[10][10],b[10][10],m,n;
printf("enter m&n\n");
scanf("%d%d",&m,&n);
readarray(a,m,n);
printarray(a,m,n);
readarray(b,m,n);
printarray(b,m,n);
addition(a,b,m,n);
printarray(a,m,n);
}
void addition(int a[10][10],int b[10][10],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j]=a[i][j]+b[i][j];
        }
    }
}
