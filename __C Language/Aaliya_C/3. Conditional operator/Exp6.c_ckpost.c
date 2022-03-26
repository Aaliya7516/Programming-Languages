#include<stdio.h>
int main()
{
    float sal;
    printf("Enter the salary");
    scanf("%f",&sal);
    (sal<40000 && sal>25000)? printf("Manager"):((sal<25000 && sal>15000)? printf("Accountant"):printf("Clerk"));
    return 0;
}
