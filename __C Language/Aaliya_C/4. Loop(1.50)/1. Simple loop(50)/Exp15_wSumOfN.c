/*15. Write a C program to find sum of all natural numbers between 1 to n.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1, n,s=0;
    printf("Enter value of n : ");
    scanf("%d",&n);
    while(i<=n)
    {
        s=s+i;
        i++;
    }
    printf("\n %d",s);
    return 0;
}
