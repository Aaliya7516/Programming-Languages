/*The distance between two cities (in km) is input through keyboard. Write a
 program to convert this distance into meters, feet, inches and centimeters.*/
#include<stdio.h>
#include<conio.h>
int main()
{
float km, m, ft, i, cm;
printf("Enter dintance between two cities : ");
scanf("%f",&km);
m=km*1000;
cm=100*m;
i=cm/2.54;
ft=i/12;
printf("\nDistance in KILOMETER  : %f",km);
printf("\nDistance in METER      : %f",m);
printf("\nDistance in FEET       : %f",ft);
printf("\nDistance in INCH       : %f",i);
printf("\nDistance in CENTIMETER : %f",cm);
return 0;
}
