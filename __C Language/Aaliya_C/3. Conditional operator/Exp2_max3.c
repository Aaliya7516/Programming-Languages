#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("Enter 3 integers : ");
    scanf("%d%d%d",&a,&b,&c);
    max=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("\nMaximum : %d",max);
}
