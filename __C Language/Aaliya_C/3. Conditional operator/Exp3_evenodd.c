#include<stdio.h>
#include<conio.h>
main()
{
    int a;
    printf("Enter value of a : ");
    scanf("%d",&a);
    (a%2==0)? printf("\n%d is even.\n",a) : printf("\n%d is odd.\n",a);
    return 0;
}
