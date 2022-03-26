#include<stdio.h>
int main()
{
    int i,j,k,l,n;
    printf("\nEnter the term : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++) printf(" ");
        for(k=i;k<=n;k++)
        {
         if(i==1||i==k) printf("*");
         else printf(" ");
        }
        for(l=1;l<=(n-i);l++)
        {
        if(i==1||l==(n-i))printf("*");
        else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
