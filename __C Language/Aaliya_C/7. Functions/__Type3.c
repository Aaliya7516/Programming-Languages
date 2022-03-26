#include<stdio.h>
int add();
int main()
{
    int s;
    s=add();
    printf("Sum = %d ",s);
    return 0;
}
int add()
{
    int a=10,b=5;
    return (a+b);
}
