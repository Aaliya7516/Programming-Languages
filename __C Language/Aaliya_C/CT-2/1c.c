/*Write a program to draw following pattern
1
0 1
1 0 1
0 1 0 1                                        */
#include<stdio.h>
int main()
{
    int a,i,j;
    printf("Enter number of rows : ");
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            ((i+j)%2==0)?printf("1"):printf("0");
        }
        printf("\n");
    }
    return 0;
}
