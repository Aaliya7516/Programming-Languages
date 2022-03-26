/*Ramesh's basic salary is input through the keyboard. His dearness allowance is 40% of his basic salary,
 and house rent allowance is 20% of his basic salary. Write a program to calculate gross salary. */

#include<stdio.h>
#include<conio.h>
int main()
{
float bs,da, hra, gs;
printf("Enter basic salary of Ramesh : ");
scanf("%f",&bs);
da=bs*.4;
hra=bs*.2;
gs=bs+da+hra;
printf("\nBasic salary         = %f",bs);
printf("\nDearness Allowance   = %f",da);
printf("\nHouse Rent Allowance = %f",hra);
printf("\nGross Salary         = %f",gs);
return 0;
}
