/*38. Example 2.6: Write a program to calculate the salary as per the following table:

Gender     Years of Service      Qualifications      Salary

Male       >= 10                 Post-Graduate       15000
           >= 10                 Graduate            10000
           < 10                  Post-Graduate       10000
           < 10                  Graduate            7000

Female     >= 10                 Post-Graduate       12000
           >= 10                 Graduate            9000
           < 10                  Post-Graduate       10000
           < 10                  Graduate            6000    */
#include<stdio.h>
int main()
{
    int y;
    char g,q;
    printf("Enter gender(M/F), year of experience, and qualifications(P for post graduate and G for graduate) : ");
    scanf("%c %d %c",&g,&y,&q);
    if(g=='M')
    {
        if(y>=10)
        {
            if(q=='P') printf("\nSalary : 15,000");
            else printf("\nSalary : 10,000");
        }
        else
        {
             if(q=='P') printf("\nSalary : 10,000");
            else printf("\nSalary : 7,000");
        }
    }
    else
    {
        if(y>=10)
        {
            if(q=='P') printf("\nSalary : 12,000");
            else printf("\nSalary : 9,000");
        }
        else
        {
             if(q=='P') printf("\nSalary : 10,000");
            else printf("\nSalary : 6,000");
        }
    }
    return 0;
}
