/* A company insures its drivers in the following cases:
 − If the driver is married.
 − If the driver is unmarried, male & above 30 years of age.
 − If the driver is unmarried, female & above 25 years of age.
 In all other cases the driver is not insured. If the marital status, sex and age of the driver
are the inputs, write a program to determine whether the driver is to be insured or not.(NESTES IF)*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    char ms,g;
    printf("Enter marital status(M/U) : ");
    scanf("%c",&ms);
    if(ms=='M' || ms=='m')
        printf("\nThe driver CAN be insured.\n");
    else
    {
        printf("\nEnter gender(M/F) and age of driver : ");
        scanf(" %c%d",&g,&a); // Giving space empties the buffer and hence enter key is not taken as second character here.
        if(((g=='M' || g=='m') && a>30)||((g=='F' || g=='f') && a>25))
            printf("\nThe driver CAN be insured.\n");
        else
             printf("\nThe driver CANNOT be insured.\n");
    }
}
