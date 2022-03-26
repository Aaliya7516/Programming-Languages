/*48. Write a program to fill the entire screen with diamond and heart alternatively. The ASCII value for heart is 3 and that of diamond is 4.*/
#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=57;i++)
    {
        for(j=1;j<=40;j++)
        {
            printf("%c%c",4,3);
        }
    }
    return 0;
}
