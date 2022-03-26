/*Write a C program to convert days into year, week and days.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n, y, w;
    printf("Enter total number of days (except for leap year) : ");
    scanf("%d",&n);//n=375
    y=n/365;//y=1
    n=n%365;//n=10
    w=n/7;//w=1
    n=n%7;//n=3
    printf("\nIts converted form : %d years %d weeks %d days",y,w,n);
    return 0;
}
