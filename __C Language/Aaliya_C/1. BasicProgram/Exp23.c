/*Write C program to input P, T, R and to find compound interest.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float p,t,r,c;
    printf("Enter Principal, Rate and Time : \n");
    scanf("%f%f%f",&p,&r,&t);
    c=p*pow((1+r/100),t);
    printf("Compound interest is : %f",c);
    return 0;
}
