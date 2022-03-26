#include<stdio.h>
int main ()
{
    int a[]={0,1,2,3,4} ;
    int i , *ptr;
    for(ptr=a+4,i=0;i<=4;i++)
    printf("%d",ptr[-i]);
    return 0;
}
