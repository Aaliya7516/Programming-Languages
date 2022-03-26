#include<stdio.h>
int main()
{
    int a;
    unsigned long long int f=1;
    printf("\n Enter the Integer whose factorial is needed : ");
    scanf("%d",&a);
    while(a>0)
    {
        f=f*a;
        --a;
    }
    printf("\n Factorial : %llu \n",f);
    return 0;
}
