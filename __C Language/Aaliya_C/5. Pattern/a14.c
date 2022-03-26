#include<stdio.h>
int main()
{
    int i,j,n,p;
    printf("\nEnter the term : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        p=n;
        for(j=i;j<=n;j++) printf("%d",p--);
        printf("\n");
    }
    return 0;
}
