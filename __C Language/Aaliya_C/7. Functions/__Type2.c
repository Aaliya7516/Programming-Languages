#include<stdio.h>
void add(int,int);
int main()
{
    int a=10,b=5;
    add(a,b);
    return 0;
}
void add(int x,int y)
{
    int s;
    s=x+y;
    printf("Sum = %d ",s);
}
