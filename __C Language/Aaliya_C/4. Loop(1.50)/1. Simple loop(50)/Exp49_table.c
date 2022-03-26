/*49. Write a program to print the multiplication table of the number entered by the user. The
table should get displayed in the following form. 29 * 1 = 29 29 * 2 = 58 … */
#include<stdio.h>
int main()
{
    int i=1,a,b;
    printf("Enter the number whose table is needed : ");
    scanf("%d",&a);
    printf("\nTill when table is needed : ");
    scanf("%d",&b);
    while(i<=b)
    {
        printf("\n %d * %d = %d",a,i,a*i);
        i++;
    }
    return 0;
}
