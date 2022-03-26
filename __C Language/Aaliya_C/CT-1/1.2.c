#include<stdio.h>
int main()
{
    float bs,gs;
    printf("\n Enter basic salary of the employee : ");
    scanf("%f",&bs);
    if(bs<=10000) gs=2*bs;
    else if(bs<=20000) gs=2.15*bs;
    else gs=2.25*bs;
    printf("\n Gross salary : Rs.%.2f/-\n",gs);
    return 0;
}
