#include<stdio.h>
int main()
{
    int y;
    printf("Enter the year : ");
    scanf("%d",&y);
    (y%4==0 && y%100!=0)? printf("\n%d is a leap year.\n",y)
            :((y%400==0)? printf("\n%d is a leap year.\n",y)
                    :printf("\n%d is not a leap year.\n",y));
    return 0;
}
