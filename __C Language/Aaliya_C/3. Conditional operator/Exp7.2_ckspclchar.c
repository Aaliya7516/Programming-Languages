#include<stdio.h>
int main()
{
   char a;
   printf("Enter character : ");
   scanf("%c",&a);
   (a<'0' ||(a<'9' &&a>'A')||(a<'Z'&&a>'a')||(a>'z'))?printf("%c is special character.\n",a)
   :printf("%c is not a special character.\n",a);
    return 0;
}
