/*The marks obtained by a student in 5 different subjects are input through the keyboard.
The student gets a division as per the following rules:
 Percentage above or equal to 60 - First division
 Percentage between 50 and 59 - Second division
 Percentage between 40 and 49 - Third division
 Percentage less than 40 - Fail
 Write a program to calculate the division obtained by the student.(NESTED IF)*/
#include<stdio.h>
int main()
{
    float a,b,c,d,e,p;
    printf("Enter marks in five subjects out of 100 : ");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    p=(a+b+c+d+e)/5;
    if(p<40) printf("\nFail");
    else
    {
        if(p<=49)  printf("\nThird Division");
    else
    {
        if(p<=59)  printf("\nSecond Division");
        else printf("\nFirst Division");
    }
    }
    return 0;
}
