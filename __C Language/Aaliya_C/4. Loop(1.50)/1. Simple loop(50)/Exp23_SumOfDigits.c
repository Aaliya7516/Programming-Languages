/*23. Write a C program to calculate sum of digits of a number. */
#include<stdio.h>
int main()
{
    int a,s=0,n;
    printf("\nEnter the number : ");
    scanf("%d",&a);
    while(a>0)
    {
        n=a%10;
        s=s+n;
        a=a/10;
    }
    printf("\nSum of its digits : %d",s);
    return 0;
}
