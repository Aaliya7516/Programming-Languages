#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=3;i++)
    {
        printf("SSTC");
        for(j=1;j<=4-i;j++)  printf("\b \b");//space is to run the \b token and another \b to clear the space...
        printf("\n");
    }
    printf("SSTC\n");
    for(i=5;i<=7;i++)
    {
        printf("SSTC");
        for(j=1;j<=i-4;j++)  printf("\b \b");
        printf("\n");
    }
    return 0;
}
