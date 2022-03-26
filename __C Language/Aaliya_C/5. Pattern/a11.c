#include<stdio.h>
int main()
{
    int i,j,k,l,n,p;
    printf("\nEnter the term : ");
    scanf("%d",&n);
    p=1;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++) printf(" ");
        for(k=1;k<=i;k++) printf("%d",p++);
        p--;
        for(l=1;l<i;l++) printf("%d",--p);
        printf("\n");
    }
    return 0;
}
