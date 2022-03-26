
#include<stdio.h>
#include<conio.h>
main()
{
    int q;
    float p,t, d=0;
    printf("Enter quantity and price");
    scanf("%d%f",&q,&p);
    if (q>1000)
        d=0.1;
    t=q*p-q*p*d;
    printf("\n Total = %f",t);
    return 0;
}
