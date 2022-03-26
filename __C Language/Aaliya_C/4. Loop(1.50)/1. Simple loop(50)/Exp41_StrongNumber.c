/*41. Write a C program to check whether a number is Strong number or not. */
#include<stdio.h>
int main()
{
    int a,a1,sum=0,p,q,i;
    printf("\nEnter the number : ");
    scanf("%d",&a);
    a1=a;//145

    while(a1>0)
    {
        q=1;
        p=a1%10;//p=5;4;1
        for(i=2;i<=p;i++) q*=i;//q=5!;4!;1!
        sum+=q;//sum=5!;5!+4!;5!+4!+1!
        a1/=10;//14;1;0
    }
    if(sum==a)  printf("\n%d is Strong number.",a);
    else printf("\n%d is NOT Strong number.",a);
    return 0;
}
