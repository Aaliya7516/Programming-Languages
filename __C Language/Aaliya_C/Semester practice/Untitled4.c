#include<stdio.h>
int main()
{
    int a,i,j,k,l;
    for(i=0;i<4;i++)
    {
        a=i+1;
        for(j=4;j>i;j--)  printf(" ");
        for(k=0;k<i;k++)
        {
            printf("%d",a);
            a++;
        }
        for(l=0;l<=i;l++)
        {
            printf("%d",a);
            --a;
        }
        printf("\n");
    }
    return 0;
}
