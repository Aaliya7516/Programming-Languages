/*17. 1/1! - (2*2)/2! + (3*3*3)/3! - (4*4*4*4)/4!+ (5*5*5*5*5)/5!- ... + (n*n*n...*n)/n! */
#include<stdio.h>
int main()
{
    int n,i,j,p,f;
    float sum=0;
    printf("\nEnter the number of terms required : ");
    scanf("%d",&n);//5

    for(i=1;i<=n;i++)//1;2;3;4;5
    {
        p=1;
        f=1;
        for(j=1;j<=i;j++)//(1);(1;2);(1;2;3);(1;2;3;4);(1;2;3;4;5)
        {
            p*=i;//(1);(2;4);(3;9;27);(4;16;64;256);(5;25;125;625;3125)
            f*=j;//1!;2!;3!;4!5!
            printf("\n %d\t%d",p,f);
        }
        if(i%2!=0)  sum+=((float)p/f);
        else sum-=((float)p/f);
    }
    printf("\nSum of series : %f",sum);
    return 0;
}
