#include<stdio.h>
int main()
{
    int i,j,n;
    printf("\nEnter the term : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++) printf("1");
        printf("\n");
    }
    return 0;
}
