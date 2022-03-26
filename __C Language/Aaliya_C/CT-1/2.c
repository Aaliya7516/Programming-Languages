#include<stdio.h>
int main()
{
    int u;
    float t;
    printf("\nEnter electricity unit charges : ");
    scanf("%d",&u);
    if(u<=50)   t=u*0.5;
    else if(u<=150)   t=50*0.5+(u-50)*0.75;
    else if(u<=250)   t=50*0.5+100*0.75+(u-150)*1.2;
    else              t=50*0.5+100*0.75+100*1.2+(u-250)*1.5;
    t=t*1.2;
    printf("\n Total electricity bill : Rs.%.2f/-\n",t);
    return 0;
}
