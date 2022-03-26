/*34. Write a C program to print all Prime numbers between 1 to n.*/
#include<stdio.h>
int main()
{
    int i,i1,j,n;
    printf("\nEnter the range : ");
    scanf("%d",&n);
    printf("\nPrime Numbers between 1 to %d : \n",n);
    for(i=1;i<=n;i++)
    {
        i1=i;
        for(j=2;j<i1;j++)
        {
            if(i1%j==0)
            {
                i1=i%j;
                break;
            }
        }
        if(i1==i) printf("%d\t",i);
    }
    return 0;
}
