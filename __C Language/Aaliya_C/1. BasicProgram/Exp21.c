/*Write C program to find the area of an equilateral.*/
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,e,t,av,p;
    printf("Enter marks of five subjects out of 80 : ");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    t=a+b+c+d+e;
    av=t/5;
    p=t*100/80/5;
    printf("\nThe total is      : %f",t);
    printf("\nThe average is    : %f",av);
    printf("\nThe percentage is : %f%%",p);//so that the compiler will take one %
    return 0;
}
