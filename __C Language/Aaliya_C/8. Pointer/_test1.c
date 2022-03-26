#include<stdio.h>
void swap(int*,int*);
int main()
{
    int *a=10,*b=20;
    printf("a=%d   b=%d\n",a,b);
    swap(&a,&b);
    printf("a=%d   b=%d\n",a,b);
    return 0;
}
void swap(int *a,int *b)
{

    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
