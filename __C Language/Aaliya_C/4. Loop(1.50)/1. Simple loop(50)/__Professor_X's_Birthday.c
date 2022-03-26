/*Mr. X's birthday is in next month. This time he is planning to invite N of his friends. He wants to distribute some chocolates to
 all of his friends after party. He went to a shop to buy a packet of chocolates. At chocolate shop, each packet is having different
 number of chocolates. He wants to buy such a packet which contains number of chocolates, which can be distributed equally among all
 of his friends. Help Mr. X to buy such a packet.
 -Input:
  First line contains T, number of test cases. Each test case contains two integers, N and M. where is N is number of
  friends and M is number number of chocolates in a packet.
 -Output:
  In each test case output "Yes" if he can buy that packet and "No" if he can't buy that packet.
 -Constraints:
    1<=T<=20     1<=N<=100       1<=M<=10^5  */

#include<stdio.h>
int main()
{
    int t=1,n,m,i;
    printf("\nEnter number of test cases (1<=T<=20) : ");
    scanf("%d",&t);
        if(t>=1&&t<=20)
        {
            for(i=1;i<=t;i++)
            {
                printf("\nEnter number of friends (1<=N<=100) and of chocolates (1<=M<=100,000) : ");
                scanf("%d%d",&n,&m);
                printf("Can Professor X buy the chocolate packet : ");
                if ((n>=1&&n<=100)&&(m>=1&&m<=100000))
                {
                    if(m%n==0)  printf("Yes\n");
                    else  printf("No\n");
                }
                else    printf("Invalid input\n");
            }
        }
        else printf("Invalid input\n");
        return 0;
}
