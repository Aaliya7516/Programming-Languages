/*28. Write a C program to enter a number and print it in words. */
#include<stdio.h>
int main()
{
    int a;
    printf("\nEnter the number between 0 to 9 : ");
    scanf("%d",&a);
    if(a==0) printf("\nZero\n");
    else if(a==1) printf("\nOne\n");
    else if(a==2) printf("\nTwo\n");
    else if(a==3) printf("\nThree\n");
    else if(a==4) printf("\nFour\n");
    else if(a==5) printf("\nFive\n");
    else if(a==6) printf("\nSix\n");
    else if(a==7) printf("\nSeven\n");
    else if(a==8) printf("\nEight\n");
    else if(a==9) printf("\nNine\ns");
    return 0;
}
