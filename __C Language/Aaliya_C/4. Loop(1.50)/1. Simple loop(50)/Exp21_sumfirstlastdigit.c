/*21. Write a C program to find sum of first and last digit of a number.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,n1;
    printf("\nEnter the term : ");
    scanf("%d",&n);
    n1=n%10;
    while(n>10)
        n=n/10;
    n=n+n1;
    printf("\nSum of first and last digits : %d \n",n);
    return 0;
}
