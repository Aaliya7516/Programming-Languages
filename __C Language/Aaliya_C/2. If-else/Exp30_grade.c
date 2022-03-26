/*30. Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and
Computer. Calculate percentage and grade according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F */
#include<stdio.h>
int main ()
{
    float a,b,c,d,e,p;
    printf("Enter marks out of 100 : \n");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    p=(a+b+c+d+e)/5;
    if (p>=90) printf("\nPercentage : %.2f%% \t Grade : A\n",p);
    else if (p>=80) printf("\nPercentage : %.2f%% \t Grade : B\n",p);
    else if (p>=70) printf("\nPercentage : %.2f%% \t Grade : C\n",p);
    else if (p>=60) printf("\nPercentage : %.2f%% \t Grade : D\n",p);
    else if (p>=40) printf("\nPercentage : %.2f%% \t Grade : E\n",p);
    else printf("\nPercentage : %.2f%% %t Grade : F\n",p);
    return 0;
}
