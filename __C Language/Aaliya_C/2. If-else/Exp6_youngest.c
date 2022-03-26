/*If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to
determine the youngest of the three. */
#include<stdio.h>
int main ()
{
    int a,b,c;
    printf("Enter ages of Ram, Shyam and Ajay : ");
    scanf("%d%d%d",&a,&b,&c);
         if(a<b && a<c) printf("\n Ram is youngest.\n");
    else if(b<c && b<a) printf("\n Shyam is youngest.\n");
    else printf("\n Ajay is youngest.\n");
    return 0;
}
