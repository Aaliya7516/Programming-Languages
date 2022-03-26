/*Write a program for the following series using function : 1/1! - 2^2/2! + 3^3/3! - 4^4/4! +…………… */

#include<stdio.h>
int fact(int);
float pow(int);
int main()
{
    int i,a;
    float sum=0;
    printf("Enter number of terms in series : ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(i%2!=0)  sum+=(pow(i)/fact(i));
        else   sum-=(pow(i)/fact(i));
    }
    printf("Sum of series : %f",sum);
}
int fact(int a)
{
    int i,f=1;
    for(i=2;i<=a;i++) f*=i;
    return(f);
}
float pow(int a)
{
    int i,p=1;
    for(i=1;i<=a;i++) p*=a;
    return(p);
}
