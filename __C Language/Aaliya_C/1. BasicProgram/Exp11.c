/*A cashier has currency note of dominations 10,50 and 100. If the amount to be withdrawn is input through the keyboard in hundreds,
find the total number of currency notes of each denomination the cashier have to give to the withdrawer.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,h,f,t;
    printf("Enter the amount to be withdrawn(integral value in hundreds without ones place value) : ");
    scanf("%d",&a);//a=280
    h=a/100;//h=2
    a=a%100;//a=80
    f=a/50;//f=1
    a=a%50;//a=20
    t=a/10;//t=2
    printf("\nNumber of 100 currency : %d",h);
    printf("\nNumber of 50 currency  : %d",f);
    printf("\nNumber of 10 currency  : %d\n",t);
    return 0;
}
