#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void main()
{
    srand(time(0));
    int you,comp,choice=rand(),toss1,toss2,toss;
    int score1=0,score2=0,target;
    char tosschoice;

    if(choice%2==0)
    {
        printf("computer has selected even as their toss preference\n");
        tosschoice='E';
    }
    else
    {
        printf("computer has selected odd as their toss preference\n");
        tosschoice='O';
    }
    printf("enter your number for toss\n");
    scanf("%d",&toss1);
    toss2=rand()%10+1;
    toss=toss1+toss2;
    if(toss%2==0)
    {
        printf("the toss preference outcome is even\n");
        if(tosschoice=='E')
        {
            printf("computer has won the toss and elected to bat first\n");
        }
        else
        {
            printf("player1 has won the toss and elected to bat first\n");
        }
    }
    else
    {
        printf("the toss preference outcome is odd\n");
        if(tosschoice=='O')
        {
            printf("computer has won the toss and elected to bat first\n");
        }
        else
        {
            printf("player1 has won the toss and elected to bat first\n");
        }
    }
}