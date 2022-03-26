/*Write a C program to check whether a character is alphabet or not.*/
#include<stdio.h>
int main()
{
    char c;
    printf("Enter character : ");
    scanf("%c",&c);
    if ((c>=65&&c<=90)||(c>=97&&c<=122)) printf("\n%c is alphabet.",c);
    else if (c>='0'&& c<='9') printf("\n%c is digit.",c);
    else printf("\n%c is special character.",c);
    return 0;
}
