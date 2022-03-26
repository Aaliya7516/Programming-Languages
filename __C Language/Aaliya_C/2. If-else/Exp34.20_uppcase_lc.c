/*34. Any character is entered through the keyboard, write a program to determine whether the
character entered is a capital letter, a small case letter, a digit or a special symbol. The
following table shows the range of ASCII values for various characters.

Characters                ASCII Values
A – Z                     65 – 90
a – z                     97 – 122
0 – 9                     48 – 57
special symbols           0 - 47, 58 - 64, 91 - 96, 123 - 127*/
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
