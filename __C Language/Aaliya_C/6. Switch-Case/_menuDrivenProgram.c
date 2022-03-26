#include<stdio.h>
#include<stdlib.h>//for function "exit(0)"    or #include<process.h>
int main()
{
    int a,n,f;

    while(1)
    {
        printf("\n\t\t%c MENU %c\t\t",1,1);
        printf("\n1. Factorial");
        printf("\n2. Prime or not");
        printf("\n3. Odd or even");
        printf("\n4. Exit");
        printf("\nEnter your choice : ");
        scanf("%d",&a);

    switch(a)
    {
    case 1:
        printf("\nFACTORIAL\n");
        {
            f=1;
            printf("\nEnter the number whose factorial is needed : ");
            scanf("%d",&n);
            while(n>0)
            {
                f=f*n;
                n--;
            }
            printf("\nFactorial : %d\n",f);
        }
        break;
    case 2:
        printf("\nPRIME OR NOT\n");
        {
            printf("\nEnter the number to check whether ti is prime or not : ");
            scanf("%d",&n);
            for(f=2;f<n;f++)  if(n%f==0)   break;
            if(f==n)  printf("\n%d is prime. \n",n);
            else printf("\n%d is NOT prime. \n",n);
        }
        break;
    case 3:
        printf("\nODD OR EVEN\n");
        {
            printf("\nEnter value of a : ");
            scanf("%d",&n);
            if (n%2==0)  printf("\nThe number is even \n");
            else  printf("\nThe number is odd \n");
        }
        break;
    case 4:
        exit(0);
    default :
        printf("\nEnter right choice.\n");
    }
    }
    return 0;
}
