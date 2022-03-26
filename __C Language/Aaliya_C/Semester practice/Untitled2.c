#include<stdio.h>
int main()
{
    int a,i,j;
    printf("Enter number of rows : ");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        for(j=a-i;j>0;j--)  printf("  %d  ",j);
        printf("\n");
    }
    return 0;
}
