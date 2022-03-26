/*Write a C program to find power of any number x^y.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float x,s;
    printf("Enter value of number to find square root : ");
    scanf("%f",&x);
    s=sqrt(x);
    printf("\nSquare root of %f = %f",x,s);
    return 0;
}
