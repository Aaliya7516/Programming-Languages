/* Write a C program to input any alphabet and check whether it is vowel or consonant.*/
#include<stdio.h>
#include<ctype.h>//for tolower
int main()
{
    char c, d;
    printf("Enter the alphabet : ");
    scanf("%c",&c);
    d=tolower(c);
    if(d=='a'||d=='e'||d=='i'||d=='o'||d=='u') printf("\n%c is vowel.",d);
    else printf("\n%c is consonant.",d);
    return 0;
}
