#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("\nEnter the number of rows : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%2==0)
        {
            if(i<=n/2)  for(j=1;j<=i;j++) printf("*");
            else for(j=n-i+1;j>0;j--)  printf("*");
            printf("\n");
        }
        else
        {
            if(i<=n/2+1)  for(j=1;j<=i;j++) printf("*");
            else for(j=n-i+1;j>0;j--)  printf("*");
            printf("\n");
        }
    }
    return 0;
}
