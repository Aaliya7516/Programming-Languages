/*Two number are input through keyboard in two locations C and D.
Write a program to interchange the constants of C and D without using third variables.*/
#include<stdio.h>
#include<conio.h>
int main()
{
float C,D;                          // let c=10, d=20
printf("Enter values of C and D :");
scanf("%f%f",&C,&D);
C=C+D;                              //C=10+20=30
D=C-D;                              //D=30-20=10=c
C=C-D;                              //C=30-10=20=d
printf("\n Interchanged value of C and D are : ");
printf("\n C = %f",C);
printf("\n D = %f",D);
return 0;
}
