/*A five-digit number is entered through the keyboard. Write a program to obtain the
reversed number and to determine whether the original and reversed numbers are equal or
not.*/
#include<stdio.h>
int main()
{
    int n, n1, a, r;
    printf("Enter the number : ");
    scanf("%d",&n);
    n1=n;
    a=n1%10;
    n1=n1/10;
    r=a*10000;
        a=n1%10;
        n1=n1/10;
        r=r+a*1000;
    a=n1%10;
    n1=n1/10;
    r=r+a*100;
        a=n1%10;
        n1=n1/10;
        r=r+a*10;
    r=r+n1;

    printf("\nNumber  : %d",n);
    printf("\nReverse : %d",r);
    if (n==r) printf("\nBoth are equal.\n");
    else printf("\nBoth are not equal.\n");
    return 0;
}
