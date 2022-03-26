#include<stdio.h>
void add();
int main()
{
    add();
    return 0;
}
void add()///return_type function_name(parameter i.e argument i.e signature)
{
    int a=10,b=5,s;
    s=a+b;
    printf("Sum = %d ",s);
}
