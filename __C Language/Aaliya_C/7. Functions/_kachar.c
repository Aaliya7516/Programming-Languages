#include<stdio.h>
float add(float,int);
int main()
{
    int a;
    float b;
    printf("Enter a float and an integral value : ");
    scanf("%f%d",&b,&a);
    printf("Sum = %f ",add(b,a));
    return 0;
}
float add(float x,int y)
{
    return (x+y);
}
