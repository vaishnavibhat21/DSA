#include<stdio.h>
void readarray(int *,int);
void printarray(int *,int);
void main()
{
 int a[100],n;
 printf("Enter the number of terms\n");
 scanf("%d",&n);
 readarray(a,n);
 printarray(a,n);

 }

 void readarray(int *a,int n)
 {
  int i;
  for(i=0;i<n;i++)
  {
    scanf("%d",a+i);
  }
}

void printarray(int *a,int n)
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("%d\t",*(a+i));
  }
}
