#include<stdio.h>
int main()
{
    char a;
    printf("Enter value of a : ");
    scanf("%c",&a);
    ((a>='a'&&a<='z')||(a>='A'&&a<='Z'))? printf("\n%c is character.\n",a) : printf("\n%c is not a character.\n",a);
    return 0;
}
