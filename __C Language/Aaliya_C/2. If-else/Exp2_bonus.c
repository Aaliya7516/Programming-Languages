/*The current year and the year in which the employee joined the organization are entered through
the keyboard. If the number of years for which the employee has served the organization is
greater than 3 then a bonus of Rs. 2500/- is given to the employee. If the years of service are not
greater than 3, then the program should do nothing.*/
#include<stdio.h>
int main()
{
int cy,jy,yos;
printf("Enter joining year and current year : ");
scanf("%d%d",&jy,&cy);
yos=cy-jy;
if (yos>3) printf("\n Bonus = Rs. 2500/-");
return 0;
}
