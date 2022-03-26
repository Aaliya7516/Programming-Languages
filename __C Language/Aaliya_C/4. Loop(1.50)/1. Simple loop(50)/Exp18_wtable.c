/*18. Write a C program to print multiplication table of any number. */
#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,a;
    printf("Enter the number whose table is needed : ");
    scanf("%d",&a);
    while(i<=10)
    {
        printf("\n %d * %d = %d",a,i,a*i);
        i++;
    }
    return 0;
}
