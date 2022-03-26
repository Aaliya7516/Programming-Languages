/*1. Write a C program to print day of week name using switch case. */
#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter the number to get its respective day : ");
    scanf("%d",&n);
    switch(n)//switch(character/integral constant)
    {
    case 1: printf("Monday\n");
        break;
    case 2: printf("Tuesday\n");
        break;
    case 3: printf("Wednesday\n");
        break;
    case 4: printf("Thursday\n");
        break;
    case 5: printf("Friday\n");
        break;
    case 6: printf("Saturday\n");
        break;
    case 7: printf("Sunday\n");
        break;
    default: printf("No Match\n");
    }
    return 0;
}
