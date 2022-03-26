/*47. According to a study, the approximate level of intelligence of a person can be calculated using the following formula:
            i = 2 + ( y + 0.5 x )
Write a program, which will produce a table of values of i, y and x, where y varies from 1 to 6, and, for each value of y, x varies from
 5.5 to 12.5 in steps of 0.5 */
 #include<stdio.h>
 int main()
 {
    int y;
    float x,i;
    for(y=1;y<=6;y++)
    {
        for(x=5.5;x<=12.5;x+=0.5)
        {
            printf("\nIntelligence of person with x=%.1f and y=%d is : %.2f\n",x,y,(2+(y+0.5*x)));
        }
    }
    return 0;
 }
