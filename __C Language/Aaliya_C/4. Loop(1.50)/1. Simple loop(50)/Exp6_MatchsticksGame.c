/*6. Write a program for a matchstick game being played between the computer and a user. Your program should ensure that the
 computer always wins. Rules for the game are as follows:
- There are 21 matchsticks.
- The computer asks the player to pick 1, 2, 3, or 4 matchsticks.
- After the person picks, the computer does its picking.
- Whoever is forced to pick up the last matchstick loses the game. */

#include<stdio.h>
int main()
{
    int ms=21,n=0;
    printf("\n\t\t\t%c %c %c MATCHSTICK GAME %c %c %c\n",1,1,1,1,1,1);

    printf("\nRULES\n");
    printf("\n- There are 21 matchsticks.");
    printf("\n- The computer asks the player to pick 1, 2, 3, or 4 matchsticks.");
    printf("\n- After the person picks, the computer does its picking.");
    printf("\n- Whoever is forced to pick up the last matchstick loses the game.\n");

    printf("\nPick 1, 2, 3, or 4 matchsticks : \n\n");

    while(ms>1)
    {
        printf("\n\nUser Pick       : ");
        scanf("%d",&n);
        if(n>=1&&n<=4&&ms>=1)
        {
        printf("Computer pick   : %d",5-n);
        ms=ms-5;
        printf("\nMatchstick left : %d",ms);
        }
        else printf("\nInvalid Selection\n");
    }
    while(ms>0)
    {
        printf("\n\nUser Pick       : ");
        scanf("%d",&n);
        if(n==1)
        {
        printf("\nYou lost the game...%c\n",2);
        ms--;
        }
        else printf("\nInvalid Selection\n");
    }
    return 0;
}
