/*Write a C program to check whether a character is uppercase or lowercase alphabet. */
#include<stdio.h>
int main()
{
    char c;
    printf("Enter character : ");
    scanf("%c",&c);
    if (c>=65&&c<=90) printf("\n%c is upper case character.",c);
    else if(c>=97&&c<=122) printf("\n%c is lower case character.",c);
    else printf("\n%c is invalid input, try again.",c);
    return 0;
}
