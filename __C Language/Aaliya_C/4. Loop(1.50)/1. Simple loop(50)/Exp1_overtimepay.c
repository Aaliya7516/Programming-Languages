/*1. Write a program to calculate overtime pay of 10 employees. Overtime is paid at the rate
of Rs. 12.00 per hour for every hour worked above 40 hours. Assume that employees do
not work for fractional part of an hour. */
#include<stdio.h>
#include<conio.h>
int main()
{
    int h,j,p=0;
    for(j=1;j<=10;j++)
    {
    printf("\nEnter the number of hours %d employee worked : ",j);
    scanf("%d",&h);
    if(h>40)
    {
        p=(h-40)*12;
    }
    printf("Over time pay for employee %d : Rs. %d\n",j,p);
    }
    return 0;
}
