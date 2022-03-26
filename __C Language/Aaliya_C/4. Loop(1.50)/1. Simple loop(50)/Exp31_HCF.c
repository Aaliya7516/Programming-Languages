/*31. Write a C program to find HCF (GCD) of two numbers.*/
#include<stdio.h>
int main()
{
    int a,b,i,p=1;
    printf("\nEnter two numbers to find their HCF : ");
    scanf("%d%d",&a,&b);
    for(i=2;((i<=a)&&(i<=b));i++)
    {
        while((a%i==0)&&(b%i==0))
        {
            p*=i;
            a=a/i;
            b=b/i;
        }
    }
    printf("\nTheir HCF : %d\n",p);
    return 0;
}
