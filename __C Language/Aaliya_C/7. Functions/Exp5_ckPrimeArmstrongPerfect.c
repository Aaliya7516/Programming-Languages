/*5. Write a C program to check whether a number is prime, Armstrong or perfect number using functions. */
#include<stdio.h>
void primeNumber(int);
void armstrongNumber(int);
void perfectNumber(int);
int main()
{
    int a;
    printf("\nEnter the number : ");
    scanf("%d",&a);
    primeNumber(a);
    armstrongNumber(a);
    perfectNumber(a);
    return 0;
}
void primeNumber(int a)
{
    int i;
    for(i=2;i<=a;i++) if(a%i==0) break;
    if(i==a) printf("Prime number\n");
}
void armstrongNumber(int a)
{
    int a1,a2,i,j,k,b,sum=0;
    a2=a1=a;
    for(i=0;a1>0;i++) a1/=10;
    for(j=1;j<=i;j++)
    {
        b=1;
        for(k=1;k<=i;k++)  b*=a2%10;
        sum+=b;
        a2/=10;
    }
    if(sum==a)  printf("\n%d is Armstrong number.\n",a);
}
void perfectNumber(int a)
{
    int sum=0,d;
    for(d=1;d<a;d++)  if(a%d==0)  sum+=d;
    if(sum==a)  printf("\n%d is a Perfect number.\n",a);
}

