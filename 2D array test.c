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
    readarray(a,M,N);
    printarray(a,M,N);
    highest_score(a,M,N);
    average_score(a,M,N);
}
void readarray(int a[10][10],int M,int N)
    {
        int i,j,l;

    for(i=0;i<M;i++)
    {
        l=a[j][i];
        for(j=0;j<N;j++)
      {
          if(a[j][i]>l)
          {
              l=a[j][i];
          }
      }
      printf("highest_score=%d\n");
    }
}
void highest_score(int a[10][10],int M,int N)
{
    int i,j,l;
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        scanf("%d",&a[j][i]);
    }
{
    if(a[j][i]>l)
    l=a[j][i];
    highest_score=a[j][i];

{
    printf("highest_score is=%d\n",highest_score);
}
   else
{
    printf("invalid output\n");
}
}

}








