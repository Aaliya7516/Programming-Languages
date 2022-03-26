/*Write a C program to check whether the number is negative, positive or zero.*/
#include<stdio.h>
int main ()
{
    float a;
    printf("Enter the number : ");
    scanf("%f",&a);
    if(a>0) {printf("\nNumber is positive.");}
    if(a=0) {printf("\nNumber is zero.");}
    if(a<0) {printf("\nNumber is negative.");}
    return 0;
}
