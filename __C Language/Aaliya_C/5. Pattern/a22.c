#include<stdio.h>
int main()
{
    int i,j,k,n,m;
    printf("\nEnter the term : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        m=1;
        for(j=1;j<i;j++)  printf(" ");
        for(k=i;k<=n;k++) printf("%d",m++);
        printf("\n");
    }
    return 0;
}
