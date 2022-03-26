#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,r,c;
    printf("Enter number of rows : ");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {   n=r;
        for(j=1;j<=i;j++)
        {
            printf("%d",n);
            n--;
        }
        printf("\n");
    }
    return 0;
}
