#include<stdio.h>
int main()
{
    int i,j,k,l,n,p;
    printf("\nEnter the term : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++) printf("*");
        printf("\n");
    }
    return 0;
}
