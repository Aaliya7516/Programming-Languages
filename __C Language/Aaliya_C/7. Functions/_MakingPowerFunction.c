#include<stdio.h>
int power(int x,int y)
{
    int i,p=1;
    for(i=1;i<=y;i++) p*=x;
    return (p);
}
int main()
{
    int a,b;
    printf("\nEnter the value of a and b for a^b : ");
    scanf("%d%d",&a,&b);
    printf("%d^%d = %d",a,b,power(a,b));
    return 0;
}
