/*Write a C program to find power of any number x^y.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float x,y,p;
    printf("Enter value of number and its power : ");
    scanf("%f%f",&x,&y);
    p=pow(x,y);
    printf("\n%f^%f = %f\n",x,y,p);
    return 0;
}
