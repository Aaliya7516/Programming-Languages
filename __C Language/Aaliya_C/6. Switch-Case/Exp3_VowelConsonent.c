/*3. Write a C program to check whether an alphabet is vowel or consonant using switch case. */
#include<stdio.h>
int main()
{
    char ch;
    printf("\nEnter the alphabet : ");
    scanf("%c",&ch);

    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
    {
    switch(ch)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        printf("\nEntered character is vowel.\n");
        break;
    default :
        printf("\nEntered character is consonant.\n");
    }
    }
    else printf("\nCharacter is not alphabet.\n");
    return 0;
}
