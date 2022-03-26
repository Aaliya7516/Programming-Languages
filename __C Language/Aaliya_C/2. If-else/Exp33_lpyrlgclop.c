/*33. Any year is entered through the keyboard, write a program to determine whether the year
is leap or not. Use the logical operators && and ||. */
#include<stdio.h>
int main()
{
    int y;
    printf("Year : ");
    scanf("%d",&y);

    if(y%400==0||(y%100!=0&&y%4==0))
        printf("\n%d is leap year.",y);
    else
        printf("\n%d is leap not year.",y);
    return 0;
}
