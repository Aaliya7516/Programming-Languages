/*2. Write a C program print total number of days in a month using switch case. */
#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter the number amongst the following : \n 1. January\n 2. February\n 3. March\n 4. April\n 5. May\n 6. June\n 7. July\n 8. August\n 9. September\n10. October\n11. November\n12. December\n");
    scanf("%d",&n);

    switch(n)
  {
    case 1: printf("31\n");
    break;
    case 2: printf("28 or 29");
    break;
    case 3: printf("31");
    break;
    case 4: printf("30");
    break;
    case 5: printf("31");
    break;
    case 6: printf("30");
    break;
    case 7: printf("31");
    break;
    case 8: printf("31");
    break;
    case 9: printf("30");
    break;
    case 10: printf("31");
    break;
    case 11: printf("30");
    break;
    case 12: printf("31");
    break;
    default :printf("Invalid input");
  }
    return 0;
}
