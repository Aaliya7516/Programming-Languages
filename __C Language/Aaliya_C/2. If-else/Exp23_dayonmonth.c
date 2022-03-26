/*Write a C program to input month number and print number of days in that month. */
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the month number : ");
    scanf("%d",&a);
    if(a==1) printf("\n 31");
    else if(a==2) printf("\n 28 or 29");
    else if(a==3) printf("\n 31");
    else if(a==4) printf("\n 30");
    else if(a==5) printf("\n 31");
    else if(a==6) printf("\n 30");
    else if(a==7) printf("\n 31");
    else if(a==8) printf("\n 31");
    else if(a==9) printf("\n 30");
    else if(a==10) printf("\n 31");
    else if(a==11) printf("\n 30");
    else if(a==12) printf("\n 31");
    else printf("\n Invalid input.");
    return 0;
}
