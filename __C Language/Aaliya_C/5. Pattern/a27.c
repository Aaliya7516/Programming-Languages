#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("\nEnter the term : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)   printf(" ");
        for(k=i;k<=n;k++)
        {
        if(i==n||i==1||i==k||k==n)  printf("*");
        else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
