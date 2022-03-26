#include<stdio.h>
int main()
{
    int tmp=52,tlp=48,lmp=35,tp=80000;
    int im,iw;
    im=(tmp-lmp)*tp/100; //13600
    iw=((100-tmp)-(tlp-lmp))*tp/100; //28000
    printf("\nTotal illiterate men : %d",im);
    printf("\nTotal illiterate women : %d",iw);
    return 0;
}
