#include<stdio.h>
int main()
{
    int i,j,n;
    printf("\nEnter value of n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%2==0)
        {
            if(i<=n/2)
            {
                for(j=1;j<=n/2;j++)
                {
                    if((i+j)<=n/2)  printf(" ");
                    else printf("*");
                }
            }
            else
            {
                for(j=1;j<=n/2;j++)
                {
                    if((i-j)>=n/2+1)  printf(" ");
                    else  printf("*");
                }
            }
            printf("\n");
        }
        else
        {
            if(i<=n/2+1)
            {
                for(j=1;j<=n/2+1;j++)
                {
                    if((i+j)<=(n/2+1))  printf(" ");
                    else printf("*");
                }
            }
            else
            {
                for(j=1;j<=n/2+1;j++)
                {
                    if((i-j)>=n/2+1)  printf(" ");
                    else  printf("*");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
