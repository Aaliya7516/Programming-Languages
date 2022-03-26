#include<stdio.h>
int minimum(int, int);
int maximum(int, int);
int main()
{
    int a,b;
    printf("\nEnter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("Minimum in them : %d",minimum(a,b));
    printf("\nMaximum in them : %d",maximum(a,b));
    return 0;
}
int minimum(int a, int b)
{
    return(a>b?a:b);
}
int maximum(int a, int b)
{
    if(a>b)  return(a);
    else return(b);
}
