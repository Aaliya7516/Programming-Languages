#include<stdio.h>
int main()
{
    int i,j,n,m;
    printf("\nEnter the term : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        m=1;
        for(j=i;j<=n;j++) printf("%d",m++);
        printf("\n");
    }
    return 0;
}
