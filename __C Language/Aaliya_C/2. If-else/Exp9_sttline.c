/*Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the
three points fall on one straight line. */
#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,x3,y1,y2,y3,s1,s2,s3;
    printf("Enter coordinates of 1st point : ");
    scanf("%d%d",&x1,&y1);
    printf("Enter coordinates of 2nd point : ");
    scanf("%d%d",&x2,&y2);
    printf("Enter coordinates of 3rd point : ");
    scanf("%d%d",&x3,&y3);

    s1=abs(y2-y1)/abs(x2-x1);  //'abs' is used to take positive value of resultant.
    s2=abs(y3-y2)/abs(x3-x2);
    s3=abs(y1-y3)/abs(x1-x3);

    if (s1==s2 && s1==s3) printf("\nThey form straight line.\n");
    else printf("\nThey do not form straight line.\n");

    return 0;
}
