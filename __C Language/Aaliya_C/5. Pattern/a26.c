#include<stdio.h>
int main()
{
    int i,j,k,n,m;
    printf("\nEnter the term : ");
    scanf("%d",&n);
    m=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)   printf(" ");
        for(k=i;k<=n;k++)  printf("%d",m++);
        printf("\n");
    }
    return 0;
}
