#include<stdio.h>
double area(double);
double diameter(double);
double circumference(double);
int main()
{
    double r;
    printf("\nEnter the radius : ");
    scanf("%lf",&r);
    printf("\nArea          : %lf",area(r));
    printf("\nDiameter      : %lf",diameter(r));
    printf("\nCircumference : %lf",circumference(r));
    return 0;
}
double area(double r)
{
    return(22/7.0*r*r);
}
double diameter(double r)
{
    return(2.0*r);
}
double circumference(double r)
{
    return(2*22/7.0*r);
}
