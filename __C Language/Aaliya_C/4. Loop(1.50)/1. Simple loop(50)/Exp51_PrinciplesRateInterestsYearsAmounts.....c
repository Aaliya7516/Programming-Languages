/*51. When interest compounds q times per year at an annual rate of r % for n years, the principle p compounds to an amount a as per the
 following formula :    a = pow((p ( 1 + r / q )),nq)
Write a program to read 10 sets of p, r, n & q and calculate the corresponding amounts. */
#include<stdio.h>
int main()
{
    int a,p,q,r,n,i;
    for(i=1;i<=10;i++)
    {
        printf("\nEnter the value of -");
        printf("\nInterest Compound : ");
        scanf("%d",&q);
        printf("\nAnnual rate       : ");
        scanf("%d",&r);
        printf("\nTotal year        : ");
        scanf("%d",&n);
        printf("\nPrinciple         : ");
        scanf("%d",&p);
        a = pow((p*(1+r/q)),n*q);
        printf("\nAmount  : %d\n",a);
    }
    return 0;
}
