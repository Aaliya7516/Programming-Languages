#include<stdio.h>
int main()
{
    int r,i,j;
    printf("Enter number of rows needed : ");
    scanf("%d",&r);
    for(i=0;i<r;i++)
    {
        for(j=r-1;j>i;j--)
            printf("*");
        for(j=0;j<=i;j++)
            printf(" ");
        for(j=r-1;j>i;j--)
            printf("//");
        for(j=1;j<=i;j++)
            printf("\\\\");
        for(j=0;j<=i;j++)
            printf(" ");
        for(j=r-1;j>i;j--)
            printf("*");
        printf("\n");
    }
    return 0;
}
