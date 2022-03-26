/*35. Write a C program to find sum of all prime numbers between 1 to n.*/
#include<stdio.h>
int main()
{
    int n,i,i1,j,s=0;
    printf("\nEnter the range : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        i1=i;
        for(j=2;j<i1;j++)  if(i1%j==0) i1=i1%j;
        if(i1==i) s+=i;
    }
    printf("\nSum of prime numbers in between the given range : %d",s);
    return 0;
}
