#include<stdio.h>
int factorial(int);
int main()
{
    int a;
    printf("\nEnter the value of a for a! : ");
    scanf("%d",&a);
    printf("%d! = %d",a,factorial(a));
    return 0;
}
int factorial(int y)
{
    int i,f=1;
    for(i=1;i<=y;i++) f*=i;
    return (f);
}
