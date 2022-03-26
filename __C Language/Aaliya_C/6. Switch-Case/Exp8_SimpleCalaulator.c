/*8. Write a C program to create Simple Calculator using switch case. */
#include<stdio.h>
#include<stdlib.h>//for function "exit(0)"
int main()
{
    int a,b,z;
    while(1)
    {
        printf("\n\t\t%c  Simple Calculator  %c",2,2);
        printf("\nChoose any option...\n 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n 5. Exit\n");
        scanf("%d",&z);

        switch(z)
        {
        case 1:
            {
            printf("\nEnter two number for addition : ");
            scanf("%d%d",&a,&b);
            printf("\n %d + %d = %d \n",a,b,a+b);
            break;
            }
        case 2:
            {
            printf("\nEnter two number for subtraction : ");
            scanf("%d%d",&a,&b);
            printf("\n %d - %d = %d \n",a,b,a-b);
            break;
            }
        case 3:
            {
            printf("\nEnter two number for multiplication : ");
            scanf("%d%d",&a,&b);
            printf("\n %d * %d = %d \n",a,b,a*b);
            break;
            }
        case 4:
            {
            printf("\nEnter two number for division : ");
            scanf("%d%d",&a,&b);
            printf("\n %d / %d = %f \n",a,b,(float)a/b);
            break;
            }
        case 5:
            {
            exit(0);
            break;
            }
        default: printf("\nChoose right option %c",1);
        }
    }
    return 0;
}
