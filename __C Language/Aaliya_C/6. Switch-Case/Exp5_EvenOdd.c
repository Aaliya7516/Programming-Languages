/*5. Write a C program to check whether a number is even or odd using switch case. */
#include<stdio.h>
int main()
{
    int a;
    printf("\nEnter the number : ");
    scanf("%d",&a);
    switch(a%2==0)
    {
        case 1:printf("%d is even number.\n ",a);
            break;
        case 0:printf("%d is odd number.\n ",a);
    }
    return 0;
}
