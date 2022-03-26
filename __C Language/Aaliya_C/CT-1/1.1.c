#include<stdio.h>
int main()
{
    float bs,gs;
    printf("\nEnter basic salary of the employee : Rs.");
    scanf("%f",&bs);
    if(bs>=1500)   gs=500+bs*1.98;
    else gs=2*bs;
    printf("\nGross Salary : Rs. %.2f/-\n",gs);
    return 0;
}
