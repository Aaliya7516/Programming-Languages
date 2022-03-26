#include<stdio.h>
int main()
{
    int i,j,n,m=1;
    printf("\nEnter the term : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)  printf("%d",m);
        printf("\n");
        m++;
    }
    return 0;
}
