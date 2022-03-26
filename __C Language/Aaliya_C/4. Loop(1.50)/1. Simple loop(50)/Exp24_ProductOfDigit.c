/*24. Write a C program to calculate product of digits of a number. */
#include<stdio.h>
int main()
{
    int a,n,p=1;
    printf("\nEnter the number : ");
    scanf("%d",&a);
    while(a>0)
    {
        n=a%10;
        p=p*n;
        a=a/10;
    }
    printf("\nProduct of its digits are : %d",p);
    return 0;
}
