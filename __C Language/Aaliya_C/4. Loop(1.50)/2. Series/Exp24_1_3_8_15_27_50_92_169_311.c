/*24. 1 3 8 15 27 50 92 169 311 */
#include<stdio.h>
int main()
{
    int a=1,b=3,c=4,d,i,sum=4;
    printf("\nSum of [1 3 8 15 27 50 92 169 311] : ");
    for(i=1;i<=7;i++)
    {
        d=(a+b+c);//8;15;27;50;92;169;311
        sum+=d;//12;27;54;104;196;365;676
        a=b;//3;4;8;15;27;50;92
        b=c;//4;8;15;27;50;92;169
        c=d;//8;15;27;50;92;169;311
    }
    printf("%d",sum);
    return 0;
}
