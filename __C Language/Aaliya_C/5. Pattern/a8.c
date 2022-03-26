#include<stdio.h>
int main()
{
    int i,j,k,l,n,p;
    printf("\nEnter value of n : ");
    scanf("%d",&n);
    printf("\n");
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        printf(" ");
        for(k=1;k<=i;k++)
        printf("%d",k);
        for(l=(i-1);l>=1;l--)
        {
        printf("%d",l);
        }
        printf("\n");
    }
    return 0;
}
