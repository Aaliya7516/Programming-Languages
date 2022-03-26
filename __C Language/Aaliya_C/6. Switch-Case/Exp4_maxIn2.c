/*4. Write a C program to find maximum between two numbers using switch case.*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("\nEnter the two numbers : ");
    scanf("%d%d",&a,&b);
    switch(a>b)
    {
        case 1:printf("\n%d is maximum.\n",a);
            break;

        case 0:
            switch(b>a)
            {
                case 1:printf("\n%d is maximum.\n",b);
                    break;
                case 0:printf("Both values are equal i.e %d\n",a);
            }
    }
    return 0;
}
