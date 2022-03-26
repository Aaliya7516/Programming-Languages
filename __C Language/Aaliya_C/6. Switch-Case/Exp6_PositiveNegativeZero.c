/*6. Write a C program to check whether a number is positive, negative or zero using switch case. */
#include<stdio.h>
int main()
{
    int a;
    printf("\nEnter the number : ");
    scanf("%d",&a);
    switch(a>0)
    {
        case 1:printf("%d is positive number.\n ",a);
            break;
        case 0:
        switch(a<0)
        {
            case 1:printf("%d is negative number.\n ",a);
                break;
            case 0:printf("%d is zero.\n",a);
        }
    }
    return 0;
}
