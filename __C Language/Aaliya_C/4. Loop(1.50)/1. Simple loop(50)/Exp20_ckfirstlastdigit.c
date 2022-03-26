/*20. Write a C program to find first and last digit of a number. */
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,n1;
    printf("\nEnter the term : ");
    scanf("%d",&n);
    n1=n%10;
    while(n>10)  n=n/10;
    printf("\nFirst digit : %d \n",n);
    printf("\nLast digit : %d \n",n1);
        return 0;
}
