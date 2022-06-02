#include<stdio.h>
#include<math.h>
void main()
{
int x1,x2,y1,y2;
float distance,s,t;
printf("Enter the coordinates\n");
scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
s=(pow(x1-x2,2)+pow(y1-y2,2));
distance=sqrt(s);
t=(distance/4);
if(t<1)
printf("mohan reaches sohan within one hour");
else
printf("mohan cannot reach sohan within one hour");
}
