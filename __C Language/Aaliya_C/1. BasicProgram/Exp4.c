/*Temperature of city in fahrenheit degrees is input through the keyboard.
Write a program to convert it into centegrate degrees.*/
#include<stdio.h>
#include<conio.h>
int main()
{
float f,c,k;
printf("Enter temperature in fahrenheit : ");
scanf("%f",&f);
c=5.0/9.0*(f-32);
k=c+273;
printf("\n Temperature in fahrenheit : %f",f);
printf("\n Temperature in centigrate : %f",c);
printf("\n Temperature in Kalvins    : %f",k);
return 0;
}
