#include<stdio.h>
int add(int,int);
int main()
{
    int a=10,b=5,s;
    s=add(a,b);
    printf("Sum = %d ",s);
    return 0;
}
int add(int x,int y)
{
    return (x+y);
}
