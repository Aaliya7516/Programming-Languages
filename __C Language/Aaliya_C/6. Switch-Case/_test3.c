/*3. Write a C program to check whether an alphabet is vowel or consonant using switch case. */
#include<stdio.h>
int main()
{
    char ch;
    printf("\nEnter the alphabets a,b or c : ");
    scanf("%c",&ch);

    switch(ch)
    {
    case 'a':
    case 'A':
        printf("\nThe letter is A\n");
        break;
    case 'b':
    case 'B':
        printf("\nThe letter is B\n");
        break;
    case 'c':
    case 'C':
        printf("\nThe letter is C\n");
        break;
    default:printf("\nNo Match\n");
    }
    return 0;
}
