/*27. Write a C program to find frequency of each digit in a given integer. */
#include<stdio.h>
int main()
{
    int a,n,f1=0,f2=0,f3=0,f4=0,f5=0,f6=0,f7=0,f8=0,f9=0,f0=0;
    printf("\nEnter the number : ");
    scanf("%d",&a);
    while(a>0)
    {
        n=a%10;
        if(n==1) f1++;
        if(n==2) f2++;
        if(n==3) f3++;
        if(n==4) f4++;
        if(n==5) f5++;
        if(n==6) f6++;
        if(n==7) f7++;
        if(n==8) f8++;
        if(n==9) f9++;
        if(n==0) f0++;
        a=a/10;
    }
    printf("\nIn the above digit...");
    printf("\nNumber of 1 : %d",f1);
    printf("\nNumber of 2 : %d",f2);
    printf("\nNumber of 3 : %d",f3);
    printf("\nNumber of 4 : %d",f4);
    printf("\nNumber of 5 : %d",f5);
    printf("\nNumber of 6 : %d",f6);
    printf("\nNumber of 7 : %d",f7);
    printf("\nNumber of 8 : %d",f8);
    printf("\nNumber of 9 : %d",f9);
    printf("\nNumber of 0 : %d",f0);
    return 0;
}
