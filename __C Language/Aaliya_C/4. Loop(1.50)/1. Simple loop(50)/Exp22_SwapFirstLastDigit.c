/*22. Write a C program to swap first and last digits of a number. */
#include<stdio.h>
int main()
{
    int a,s,l,a1,p=1;
    printf("\nEnter the number : ");
    scanf("%d",&a);
    a1=a;
    l=a%10;
    while(a>10)
    {
        a=a/10;
        p*=10;
    }
    a1=a1%p;
    a1=a1/10;
    if(l!=a) s=l*p+a1*10+a;
    else s=a1*10+a;
    printf("\nFirst number  : %d",a);
    printf("\nLast number   : %d",l);
    printf("\nSwaped number : %d",s);
    return 0;
}
