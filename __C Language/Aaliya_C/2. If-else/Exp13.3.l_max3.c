/*Write a C program to find maximum between 3 numbers (LADDER IF).*/
#include<stdio.h>
int main ()
{
    int a,b,c,max;
    printf("Enter 3 integers : ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c) max=a;
    if(b>c && b>a) max=b;
    if(c>a && c>b) max=c;

    printf("\n Max : %d",max);
    return 0;
}
