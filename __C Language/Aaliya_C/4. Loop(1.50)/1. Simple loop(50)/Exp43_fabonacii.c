/*43. Write a C program to print Fibonacci series(0 1 1 2 3 5 8 ...) up to n terms. */
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    unsigned long long int f1=0,f2=1, f3;
    printf("\nEnter number of term : ");
    scanf("%d",&n);
    printf("\n%d\n%d",f1,f2);
    for(i=3;i<=n;i++)
    {
        f3=f1+f2;
        printf("\n%d",f3);
        f1=f2;
        f2=f3;
    }
    return 0;
}
