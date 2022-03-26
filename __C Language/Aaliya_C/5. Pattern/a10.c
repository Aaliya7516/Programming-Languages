#include<stdio.h>
int main()
{
    int i,j,k,l,n,s;
    printf("\nEnter the term : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        s=n;
        for(j=i;j<n;j++) printf(" ");
        for(k=1;k<=i;k++)  printf("%d",s--);
        s++;
        for(l=1;l<i;l++) printf("%d",++s);
        printf("\n");
    }
    return 0;
}
