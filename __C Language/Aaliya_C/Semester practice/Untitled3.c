#include<stdio.h>
int main()
{
    int a=0,k,i,j;
    for(i=1;i<=9;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("  %d  ",i*100+a*j);
        }
        printf("\n");
        a+=2;
    }
    return 0;
}
