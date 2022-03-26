#include<stdio.h>
int main()
{
    int i,j,k,n,p=0;
    printf("\nEnter value of n : ");
    scanf("%d",&n);
    printf("\n");
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        printf(" ");
        for(k=1;k<=i;k++)
        {
        p++;
        printf("%d",p);
        }
        printf("\n");
    }
    return 0;
}
