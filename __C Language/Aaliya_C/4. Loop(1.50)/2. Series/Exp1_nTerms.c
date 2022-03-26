/*1. 1 + 2 + 3 + 4 + 5 + ... + n */
#include<stdio.h>
int main()
{
    int i,n,a=0;
    printf("\nEnter number of terms : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++) a=a+i;
    printf("Summation of %d terms : %d",n,a);
    return 0;
}
