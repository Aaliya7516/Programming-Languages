/*Two number are input through keyboard in two locations C and D.
Write a program to interchange the constants of C and D with the help of third variable.*/
#include<stdio.h>
#include<conio.h>
int main()
{
float C,D,i;
printf("Enter values of C and D :");
scanf("%f%f",&C,&D);
i=C;
C=D;
D=i;
printf("\n Interchanged value of C and D are : ");
printf("\n C = %f",C);
printf("\n D = %f",D);
return 0;
}
