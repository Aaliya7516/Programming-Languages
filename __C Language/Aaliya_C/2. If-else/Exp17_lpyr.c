/* Write a C program to check whether a year is leap year or not.*/
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
