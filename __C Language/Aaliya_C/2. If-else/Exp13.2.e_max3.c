/*Write a C program to find maximum between three numbers. (ELSE IF)*/
#include<stdio.h>
int main ()
{
    int a,b,c,max;
    printf("Enter 3 integers : ");
    scanf("%d%d%d",&a,&b,&c);
         if(a>b && a>c) max=a;
    else if(b>c && b>a) max=b;
    else max=c;
     printf("\nMaximum : %d",max);
    return 0;
}
