/*9. Write a currency program , that tells you how many number of 100 , 50 , 20,10 , 5 , 2 and 1 Rs notes will be needed for a
 given amount of money. For example if the total amount is Rs 545 then five 100 Rs notes, two 20 Rs notes and one 5 Rs note will
 be needed. This sort of program can be used in ATM ma chines . */
 #include<stdio.h>
int main()
{
    int i100,i50,i20,i10,i5,i2,a;
    printf("\nEnter the amount : ");
    scanf("%d",&a);

    switch(a%100==0)
    {
    case 1:
        {
            i100=a/100;
            printf("\nNotes of 100  : %d\n",i100);
            break;
        }
    case 0:
        {
            i100=a/100;
            printf("\nNotes of 100  : %d\n",i100);
            a%=100;

            switch(a%50==0)
            {
            case 1:
                {
                    i50=a/50;
                    printf("\nNotes of 50  : %d\n",i50);
                    break;
                }
            case 0:
                {
                    i50=a/50;
                    printf("\nNotes of 50  : %d\n",i50);
                    a%=50;

                    switch(a%20==0)
                    {
                    case 1:
                    {
                        i20=a/20;
                        printf("\nNotes of 20  : %d\n",i20);
                        break;
                    }
                    case 0:
                    {
                        i20=a/20;
                        printf("\nNotes of 20  : %d\n",i20);
                        a%=20;

                        switch(a%10==0)
                        {
                        case 1:
                            {
                                i10=a/10;
                                printf("\nNotes of 10  : %d\n",i10);
                                break;
                            }
                        case 0:
                            {
                                i10=a/10;
                                printf("\nNotes of 10  : %d\n",i10);
                                a%=10;

                                switch(a%10==0)
                                {
                                case 1:
                                    {
                                        i5=a/5;
                                        printf("\nNotes of 5  : %d\n",i5);
                                        break;
                                    }
                                case 0:
                                    {
                                        i5=a/5;
                                        printf("\nNotes of 5  : %d\n",i5);
                                        a%=5;

                                        switch(a%2==0)
                                        {
                                        case 1:
                                            {
                                                i2=a/2;
                                                printf("\nNotes of 2  : %d\n",i2);
                                                break;
                                            }
                                        case 0:
                                            {
                                                i2=a/2;
                                                printf("\nNotes of 2  : %d\n",i2);
                                                a%=2;
                                                printf("\nNotes of 1  : %d\n",a);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    }
    return 0;
}
