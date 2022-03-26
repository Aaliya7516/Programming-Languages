#include<stdio.h>
int main()
{
    int i,j,k,n,p;
    printf("\nEnter value of n : ");
    scanf("%d",&n);
    printf("\n");
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        printf(" ");
        p=n;
        for(k=1;k<=i;k++)
        {
        printf("%d",p);
         p--;
        }
        printf("\n");
    }
    return 0;
}
