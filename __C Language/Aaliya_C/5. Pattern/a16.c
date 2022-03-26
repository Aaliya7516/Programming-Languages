#include<stdio.h>
int main()
{
    int i,j,n;
    char a;
    printf("\nEnter the term : ");
    scanf("%d",&n);
    a='a';
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++) printf("%c",a);
        a++;
        printf("\n");
    }
    return 0;
}
