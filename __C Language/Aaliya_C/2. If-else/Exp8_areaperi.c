/*Given the length and breadth of a rectangle, write a program to find whether the area of
the rectangle is greater than its perimeter. For example, the area of the rectangle with
length = 5 and breadth = 4 is greater than its perimeter. */
#include<stdio.h>
int main()
{
    int l,b,a,p;
    printf("Enter length and breadth : ");
    scanf("%d%d",&l,&b);
    p=2*(l+b);
    a=l*b;
     printf("\nArea =%d",a);
          printf("\nPerimeter =%d",p);
         if(a>p)
            printf("\nArea is greater than its perimeter.\n");
          else if(a<p)
            printf("\nArea is less than its perimeter.\n");
          else
            printf("\nArea is equal to its perimeter.\n");
    return 0;
}

