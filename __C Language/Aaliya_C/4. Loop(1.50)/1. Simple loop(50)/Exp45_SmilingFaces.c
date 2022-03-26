/*45. Write a program to fill the entire screen with a smiling face. The smiling face has an ASCII value 1. */
#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=58;i++)
    {
        for(j=1;j<=80;j++)
        {
            printf("%c",1);
        }
    }
    return 0;
}
