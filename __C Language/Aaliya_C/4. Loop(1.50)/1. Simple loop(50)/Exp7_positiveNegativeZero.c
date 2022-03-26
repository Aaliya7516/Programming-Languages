#include<stdio.h>
int main()
{
    int p=0,n=0,z=0,b;
    char a='y';

    while(a=='y'||a=='Y')
    {
        printf("\nEnter value of Number : ");
        scanf(" %d",&b);
        if(b<0) n++;
        if(b==0) z++;
        if(b>0) p++;
        printf("\nDo you want to enter more number (Y/N) : ");
        scanf(" %c",&a);
    }
    printf("\nPositive Number : %d",p);
    printf("\nZero            : %d",z);
    printf("\nNegative Number : %d",n);
    return 0;

}
