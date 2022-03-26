/*Write a program to check the symmetricity of a Matrix .*/

#include<stdio.h>
int main()
{
    int o,a[10][10],i,j,k,l;
    printf("Enter order of matrix : ");
    scanf("%d",&o);
    for(i=1;i<=o;i++)
    {
        for(j=1;j<=o;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(k=1;k<=o;k++)
    {
        for(l=1;l<=o;l++)
        {
            if (a[k][l]!=a[l][k])  break;
        }
    }



    for(i=1;i<=o;i++)
    {
        for(j=1;j<=o;j++)
        {
            printf("%d",a[i][j]);
            printf("\t");
        }
        printf("\n");
    }

    if(k==o+1 && l==o+1) printf("\nis a symmetrical matrix.\n");
        else printf("\nis NOT a symmetrical matrix.\n");
    return 0;
}
