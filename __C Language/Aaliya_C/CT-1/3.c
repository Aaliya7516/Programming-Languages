#include<stdio.h>
int main()
{
    int d;
    float f;
    printf("\n Enter the number of days delayed in book returning : ");
    scanf("%d",&d);
    if (d<=5) printf("\n Fine : Rs.%.2f/-\n",d*0.5);
    else if(d<=10) printf("\n Fine : Rs.%.2f/-\n",(5*0.5+(d-5)));
    else if(d<=30) printf("\n Fine : Rs.%.2f/-\n",(5*0.5+5*1+(d-10)*5));
    else printf("\nYour membership has been canceled.\n");
    return 0;
}
