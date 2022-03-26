#include<stdio.h>
int factorial(int y)
{
    int i,f=1;
    for(i=1;i<=y;i++) f*=i;
    return (f);
}
float power(int x,int y)
{
    int i,p=1;
    for(i=1;i<=y;i++) p*=x;
    return (p);
}
int main()
{
    float sum=0.0f;
    int n,i;
    printf("\nEnter the number of terms required : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=power(i,i)/factorial(i);
    }
    printf("\nSum of series : %f",sum);
    return 0;
}
