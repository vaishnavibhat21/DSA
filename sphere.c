/*volume and surface area of sphere*/
#include<stdio.h>
void main()
{
int r;
float volume,surface_area;
printf("Enter radius of the sphere\n");
scanf("%d",&r);
volume=(4.0846*r*r*r);
surface_area=(12.568*r*r);
printf("volume of sphere=%f",volume);
printf("surface_area of sphere=%f",surface_area);
}
