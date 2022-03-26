/*Two number are input through keyboard in two locations C and D.
Write a program to interchange the constants of C and D without using third variable and using operator except (+,-).*/
#include<stdio.h>
#include<conio.h>
int main()
{
float C,D;
printf("Enter values of C and D (EXCEPT 0) : ");
scanf("%f%f",&C,&D);
C=C*D;
D=C/D;
C=C/D;
printf("\n Interchanged value of C and D are : ");
printf("\n C = %f",C);
printf("\n D = %f",D);
return 0;
}
