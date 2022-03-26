/*25. Write a C program to enter a number and print its reverse.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,n1,r=0,a;
    printf("\nEnter the number : ");
    scanf("%d",&n);
    n1=n;
    while(n>0)
    {
        a=n%10;
        r=r*10+a;
        n=n/10;
    }
    printf("\n Reverse of %d is : %d",n1,r);
    return 0;
    }
