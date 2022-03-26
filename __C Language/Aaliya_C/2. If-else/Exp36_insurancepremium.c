/*36. An Insurance company follows following rules to calculate premium.
 (1) If a person's health is excellent and the person is between 25 and 35 years of age and lives in a city and is a male then the
  premium is Rs. 4 per thousand and his policy amount cannot exceed Rs. 2 lakhs.
 (2) If a person's satisfies all the above conditions except that the sex is female then the premium is Rs. 3 per thousand and her
  policy amount cannot exceed Rs. 1 lakhs.
 (3) If a persons health is poor and the person is between 25 and 35 years of age and lives in a village and is a male then the
  premium is Rs. 6 per thousand and his policy cannot exceed Rs. 10,000.
 (4) In all other cases the person is not insured.
Write a program to output whether the person should be insured or not, his/her premium rate and maximum amount for which he/she
 can be insured. */
#include<stdio.h>
int main()
{
    char h,l,g;
    int a;
    printf("\nHealth condition (healthy[H]/unhealthy[U]) : ");
    scanf("%c",&h);
    printf("\nGender (M/F)                               : ");
    scanf(" %c",&g);
    printf("\nLives in city(C) or in village(V)          : ");
    scanf(" %c",&l);
    printf("\nHis/Her age                                : ");
    scanf(" %d",&a);

    if((h=='h'||h=='H')&&(a>=25&&a<=35)&&(l=='c'||l=='C')&&(g=='m'||g=='M'))
        printf("\nPremium is Rs. 4 per thousand and his policy amount cannot exceed Rs. 2 lakhs.\n");
    else if((h=='h'||h=='H')&&(a>=25&&a<=35)&&(l=='c'||l=='C')&&(g=='f'||g=='F'))
        printf("\nPremium is Rs. 3 per thousand and her policy amount cannot exceed Rs. 1 lakhs.\n");
    else if((h=='u'||h=='U')&&(a>=25&&a<=35)&&(l=='v'||l=='V')&&(g=='m'||g=='M'))
        printf("\nPremium is Rs. 6 per thousand and her policy amount cannot exceed Rs. 10,000.\n");
    else
        printf("\nThe person is not insured.\n");
    return 0;

}
