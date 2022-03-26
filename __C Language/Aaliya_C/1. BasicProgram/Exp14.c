/*Write C program to enter temperature in centigrade and convert it into Fahrenheit.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    float c,f;
    printf("Enter temperature in Centigrade : ");
    scanf("%f",&c);
    f=(9*c/5)+32;
    printf("Temperature in Fahrenheit : %f",f);
    return 0;
}
