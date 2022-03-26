/*35. A library charges a fine for every book returned late. For first 5 days the fine is 50 paise,
for 6-10 days fine is one rupee and above 10 days fine is 5 rupees. If you return the book
after 30 days your membership will be cancelled. Write a program to accept the number
of days the member is late to return the book and display the fine or the appropriate
message. */
#include<stdio.h>
int main()
{
    int d;
    float f;
    printf("Enter the number of the days : ");
    scanf("%d",&d);
         if (d>=1 && d<=5) printf("\nFine : %.2f",d*.5);
    else if (d>=6 && d<=10) printf("\nFine : %.2f",d*1.0);//decimal place in needed to be placed.
    else if (d>=11 && d<=30) printf("\nFine : %.2f",d*5.0);
    else printf("\nYour membership has been canceled.");
    return 0;
}
