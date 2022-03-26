/*6. Write a C program to find all prime numbers between given interval using functions. */
#include<stdio.h>
void primeNumber(int);
int main()
{
    int l,u,i;
    printf("\nEnter the interval : ");
    scanf("%d%d",&l,&u);
    for(i=l;i<=u;i++)
    {
        primeNumber(i);
    }
    return 0;
}
void primeNumber(int i)
{
    int j;
    for(j=2;j<=i;j++) if(i%j==0)  break;
    if(i==j)  printf("%d is a prime number.\n",i);
}
