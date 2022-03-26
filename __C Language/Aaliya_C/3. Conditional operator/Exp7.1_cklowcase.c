#include<stdio.h>
int main()
{
    char a;
    printf("Enter character : ");
    scanf("%c",&a);
    (a>='a' && a<='z')?printf("Lower case."):printf("Not a lower case.");
    return 0;
}
