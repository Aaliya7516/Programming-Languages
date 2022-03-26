/*Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the
three points fall on one straight line. */
#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,x3,y1,y2,y3,l12,l23,l13;
    printf("Enter coordinates of 1st point : ");
    scanf("%d%d",&x1,&y1);
    printf("Enter coordinates of 2nd point : ");
    scanf("%d%d",&x2,&y2);
    printf("Enter coordinates of 3rd point : ");
    scanf("%d%d",&x3,&y3);

    l12=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    l23=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
    l13=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));

    printf("\n%d",l12);
    printf("\n%d",l23);
    printf("\n%d",l13);

    if(l13==l12+l23) printf("\nThey form straight line.\n");
    else printf("\nThey do not form straight line.\n");

    return 0;
}
