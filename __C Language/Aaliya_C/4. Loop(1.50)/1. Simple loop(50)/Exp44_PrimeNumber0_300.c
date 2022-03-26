/*44. Write a program to print all prime numbers from 1 to 300. (Hint: Use nested loops, break and continue)*/
#include<stdio.h>
int main()
{
    int i,i1,j;
    printf("\nPrime Numbers between 1 to 300 : \n");
    for(i=1;i<=300;i++)
    {
        i1=i;
        for(j=2;j<i1;j++)
        {
            if(i1%j==0)
            {
                i1=i%j;
                break;
            }
            else continue;
        }
        if(i1==i) printf("%d\t",i);
    }
    return 0;
}
