#include<stdio.h>
int main()
{
float r,d,c,a;
printf("\nEnter radius of circle : ");
scanf("%f",&r);
d=2.0*r;
c=2.0*3.14*r;
a=3.14*r*r;
printf("\nDiameter of circle      : %f ",d);
printf("\nCircumference of circle : %f ",c);
printf("\nArea of circle          : %f ",a);
return 0;
}
