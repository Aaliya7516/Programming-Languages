/*Write a C program to count total number of notes in given amount. */
#include<stdio.h>
int main()
{
    int a,n10,n20,n50,n100,n500,n2000;
    printf("Enter the amount : ");
    scanf("%d",&a);

    if(a%2000==0)
    {
        n2000=a/2000;
        printf("\nNote of 2000 : %d\n",n2000);
    }
    else
    {
        n2000=a/2000;
        printf("\nNote of 2000 : %d\n",n2000);
        a=a%2000;
        if(a%500==0)
        {
            n500=a/500;
            printf("\nNote of 500  : %d\n",n500);
        }
        else
        {
            n500=a/500;
            printf("\nNote of 500  : %d\n",n500);
            a=a%500;
            if(a%100==0)
            {
                n100=a/100;
                printf("\nNote of 100  : %d\n",n100);
            }
            else
            {
                n100=a/100;
                printf("\nNote of 100  : %d\n",n100);
                a=a%100;
                if(a%50==0)
                {
                    n50=a/50;
                    printf("\nNote of 50   : %d\n",n50);
                }
                else
                {
                    n50=a/50;
                    printf("\nNote of 50   : %d\n",n50);
                    a=a%50;
                    if(a%20==0)
                    {
                        n20=a/20;
                        printf("\nNote of 20   : %d\n",n20);
                    }
                    else
                    {
                        n20=a/20;
                        printf("\nNote of 20   : %d\n",n20);
                        a=a%20;
                        a=a/10;
                        printf("\nNote of 10   : %d\n",a);
                    }
                }
            }
        }
    }
    return 0;
}
