/*Write a C program to input week number and print week day. */
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the week number : ");
    scanf("%d",&a);
    if(a==1) printf("\n Monday");
    else if(a==2) printf("\n Tuesday");
    else if(a==3) printf("\n Wednesday");
    else if(a==4) printf("\n Thursday");
    else if(a==5) printf("\n Friday");
    else if(a==6) printf("\n Saturday");
    else if(a==7) printf("\n Sunday");
    else printf("\n Invalid input.");
    return 0;
}
