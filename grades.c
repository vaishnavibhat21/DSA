#include<stdio.h>
void main()
{
int marks;
printf("Enter the marks\n");
scanf("%d",&marks);
if(marks>=50)
{printf("second division\n");
}
else if(marks>=60)
{printf("first division\n");
}
else if(marks>=80)
{printf("distinction\n");
}
else if(marks>=40)
{printf("pass\n");
}
else
{printf("fail\n");
}
}
