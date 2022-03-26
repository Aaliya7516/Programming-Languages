/*10. If a number 972 is entered through keyboard , your program should print “Nine Seven two” ,
WAP such that it does this for any positive integer . */
#include<stdio.h>
int main()
{
    int a,a1,a2,p,i,j;
    printf("\nEnter any number to spell it : ");
    scanf("%d",&a);
    printf("\n");
    a2=a1=a;
    for(i=0;a1>0;i++)  a1/=10;

    while(i>0)
    {
        p=1;
        for(j=1;j<i;j++) p*=10;
        a2/=p;
        a%=(p);
        switch(a2)
        {
            case 1 : printf("One ");
            break;
            case 2 : printf("Two ");
            break;
            case 3 : printf("Three ");
            break;
            case 4 : printf("Four ");
            break;
            case 5 : printf("Five ");
            break;
            case 6 : printf("Six ");
            break;
            case 7 : printf("Seven ");
            break;
            case 8 : printf("Eight ");
            break;
            case 9 : printf("Nine ");
            break;
            case 0 : printf("Zero ");
            break;
        }
        a2=a;
        i--;
    }
    printf("\n");
    return 0;
}
