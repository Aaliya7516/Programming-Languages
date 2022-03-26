/*Write C program to input P, T, R and to find simple interest.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    float p,t,r,s;
    printf("Enter Principal, Rate and Time : \n");
    scanf("%f%f%f",&p,&r,&t);
    s=p*r*t/100;
    printf("Simple interest is : %f",s);
    return 0;
}
