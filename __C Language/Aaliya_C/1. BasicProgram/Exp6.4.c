/*Two number are input through keyboard in two locations C and D.
Write a program to interchange the constants of C and D without using third variable and any operator.*/
#include<stdio.h>
#include<conio.h>
int main()
{
int C,D;   //bitwise operator does not work on float.
printf("Enter values of C and D : ");
scanf("%d%d",&C,&D);
C=C^D;
D=C^D;
C=C^D;
printf("\n Interchanged value of C and D are : ");
printf("\n C = %d",C);
printf("\n D = %d",D);
return 0;
}
