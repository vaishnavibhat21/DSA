/*distance between two coordinates*/
#include<stdio.h>
#include<math.h>
main()
{
int x1,x2,y1,y2;
float s,distance;
printf("Enter the coordinates\n");
scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
s=pow((x2-x1),2)+pow((y2-y1),2);
distance=sqrt(s);
printf("The distance=%f",distance);
}
