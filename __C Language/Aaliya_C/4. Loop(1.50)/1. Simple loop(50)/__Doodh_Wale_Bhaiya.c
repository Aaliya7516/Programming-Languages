/*A Milkman serves milk in packaged bottles of varied sizes. The possible size of the bottles are {1, 5, 7 and 10} litres. He wants
 to supply desired quantity using as less bottles as possible irrespective of the size. Your objective is to help him find the
 minimum number of bottles required to supply the given demand of milk.
-Input Format:
 First line contains number of test cases N. Next N lines, each contain a (+)ve integer Li which corresponds to the demand of milk.
-Output Format:
 For each input Li, print the minimum number of bottles required to fulfill the demand
-Constraints:
1 <= N <= 1000           Li > 0                   1 <= i<= N                   */
#include<stdio.h>
int main()
{
    int n,li,i=0,t;
    printf("\nEnter number of test cases (1<=N<=1000) : ");
    scanf("%d",&n);
    if(n>=1&&n<=1000)
    {
        for(t=1;t<=n;t++)
        {
            printf("\nEnter quantity of milk (Li>0) : ");
            scanf("%d",&li);
            if(li>0)
            {
                i=0;
                i+=(li/10);
                printf("Total number of 10l bottle needed : %d\n",i);
                li=li%10;
                i+=(li/7);
                printf("Total number of 7l bottle needed : %d\n",i);
                li=li%7;
                i+=(li/5);
                printf("Total number of 5l bottle needed : %d",i);
                li=li%5;
                i+=li;
                printf("\nTotal number of 1l bottle needed : %d",i);
            }
            else printf("***Invalid selection***\n");
        }
    }
    else printf("***Invalid selection***\n");
    return 0;
}
