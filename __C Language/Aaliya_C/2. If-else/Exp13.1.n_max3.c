/*Write a C program to find maximum between 3 numbers.(NESTED IF)*/
#include<stdio.h>
int main ()
{
    int a,b,c,max;
    printf("Enter 3 integers : ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c) max=a;
        else max=c;
    }
    else
    {
        if(b>c) max=b;
        else max=c;
    }
    printf("\n Max : %d",max);
    return 0;
}
