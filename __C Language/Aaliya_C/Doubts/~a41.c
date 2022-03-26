#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,o,a;
    printf("\nEnter the row : ");
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        if(a%2==0)
        {
            if(i<=(a/2))
            {
                for(j=i;j<(a/2);j++) printf(" ");
                for(k=1;k<=i;k++) printf("*");
                for(l=1;l<i;l++)  printf("*");
            }
            else
            {
                for(m=1;m<i-a/2;m++) printf(" ");
                for(n=i;n<a+1;n++) printf("*");
                for(o=i;o<a;o++)  printf("*");
            }
        }
         else
         {
            if(i<=(a/2+1))
            {
                for(j=i;j<=(a/2);j++) printf(" ");
                for(k=1;k<=i;k++) printf("*");
                for(l=1;l<i;l++)  printf("*");
            }
             else
            {
                for(m=1;m<i-a/2;m++) printf(" ");
                for(n=i;n<a+1;n++) printf("*");
                for(o=i;o<a;o++)  printf("*");
            }
         }
        printf("\n");
    }
    return 0;
}
