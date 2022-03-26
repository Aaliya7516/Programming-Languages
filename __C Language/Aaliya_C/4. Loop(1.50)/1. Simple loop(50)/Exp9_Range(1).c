/*9.W.a.p to find the range of a set of numbers. Range is the difference between the smallest and biggest number in the list.*/
#include<stdio.h>
int main()
{
    int a,b,l,s,r;
    char ch='Y';
    printf("\nEnter the number : ");
    scanf("%d",&a);
    l=s=a;
    while(ch=='Y'||ch=='y')
    {
            printf("\nEnter the number : ");
            scanf("%d",&b);
            if(s>b)  s=b;
            else if(b>l)  l=b;
        printf("\nWanna enter another number? [Y/N] : ");
        scanf(" %c",&ch);
    }
    r=l-s;
    printf("\nSmallest number : %d",s);
    printf("\nLargest number  : %d",l);
    printf("\nRange : %d",r);
    return 0;
}
