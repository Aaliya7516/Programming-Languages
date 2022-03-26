/* In a company an employee is paid as under: If his basic salary is less than Rs. 1500, then HRA =
10% of basic salary and DA = 90% of basic salary. If his salary is either equal to or above Rs.
1500, then HRA = Rs. 500 and DA = 98% of basic salary. If the employee's salary is input
through the keyboard write a program to find his gross salary. */
#include<stdio.h>
int main()
{
    float bs,hra,da, gs;
    printf("Enter basic salary : ");
    scanf("%f",&bs);
    if(bs<=1500)
    {
        hra=0.1*bs;
        da=0.9*bs;
    }
    else
    {
        hra=500;
        da=.98*bs;
    }
    gs=bs+hra+da;
    printf("HRA                : %.2f",hra);
    printf("\nDA                 : %.2f",da);
    printf("\nGross salary       : %.2f",gs);
    return 0;
}
