#include<stdio.h>
#include<conio.h>
    int main()
        {
        int a,b,c;
            printf("Enter value of a and b");
            scanf("%d%d",&a,&b);

            c=a+b;
            printf("\nSum = %d",c);

            c=a-b;
            printf("\nDifference = %d",c);

            c=a/b;
            printf("\nRatio = %d",c);

            c=a*b;
            printf("\nProduct = %d",c);

            c=a%b;
            printf("\nRemainder = %d",c);

           return 0;
        }
