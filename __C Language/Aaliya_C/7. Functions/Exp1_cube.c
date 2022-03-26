#include<stdio.h>
double cube(double a)
{
    return (a*a*a);
}
int main()
{
    double a;
    printf("\nEnter the number : ");
    scanf("%lf",&a);
    printf("Cube of %lf = %lf ",a,cube(a));
    return 0;
}
