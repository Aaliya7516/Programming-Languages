/*2. Write a program to find the factorial value of any number entered through the keyboard. */
#include<stdio.h>
#include<conio.h>
int main()
{
    int f=1,n;
    printf("Enter the number whose factorial is needed : ");
    scanf("%d",&n);
    while(n>0)
    {
        f=f*n;
        n--;
    }
    printf("\nFactorial : %d",f);
    return 0;
}
