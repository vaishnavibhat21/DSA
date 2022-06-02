#include<stdio.h>
void readarray(int a[10][10],int,int);
void printarray(int a[10][10],int,int);
void highest_score(int a[10][10],int,int);
void average_score(int a[10][10],int,int);
void main()
{
    int a[10][10],i,j,M,N;
    printf("enter the number M and N\n");
    scanf("%d%d",&M,&N);
if(M<=10 && N<=10)
{
    readarray(a,M,N);
    printarray(a,M,N);
    }
else

{
    printf("invalid output\n");
}
}

void readarray(int a[10][10],int M,int N)
{
int i,j;
for(i=0;i<M;i++)
{
    for(j=0;j<N;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
}
void printarray(int a[10][10],int M,int N)
{
int i,j;
for(i=0;i<M;i++)
{
    for(j=0;j<N;j++)
    {
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}
}
