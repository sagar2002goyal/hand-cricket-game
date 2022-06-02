#include<stdio.h>
#include<conio.h>                                           
#include<stdlib.h>
int choice,player,comp,score=0,toss,ts,d,score1,comp1,player1;                                             
void bat()
{
    int k=0;
 printf("\n\n _________game starts_________");           
    while(k==0)
 {
  printf("\n\n enter the number :");
  scanf("%d",&player);
  comp=1 + (rand() % 6);
        printf("\n computer : %d \n player   : %d",comp,player);
        if(comp!=player)
        {
   score=score+player;
   printf("\n\n Score : %d",score);
        }
        else
        {
            printf("\n\n Out !!!!!!! ");
            printf("\n\n Score : %d",score);
            k=1;
  }
 }
}


void bowl()
{
 int l=0;
 printf("\n\n _________game starts_________");           
    while(l==0)
 {
  printf("\n\n enter the number :");
  scanf("%d",&player1);
  comp1=1 + (rand() % 6);
        printf("\n computer : %d \n player   : %d",comp1,player1);
        if(comp1!=player1)
        {
   score1=score1+comp1;
   printf("\n\n Score : %d",score1);
        }
        else
        {
            printf("\n\n Out !!!!!!! ");
            printf("\n\n  score  : %d",score1);
            l=1;
  }
 }
}        

 

int main()                                                       
{
                               
        char name[20];
        printf("\n\n * * * * welcome to The World Of Hand Cricket * * * *");
        printf("\n\n enter your name : ");
        scanf("%s",name);
        printf("\n welcome %s",name);
        printf("\n\n ****************game menu******************");
        printf("\n 1 - Play Now  \n 2 - How To Play \n 3 - About  \n ");
        printf("\n Enter your choice : ");
        scanf("%d",&choice);
        switch(choice)                                                     
        {
         case 1:
             
           printf("\n\n TOSS TIME.....");
              printf("\n\n HEAD or TAIL......\n\nif HEAD enter 1   ... \n\nif TAIL enter 2 \n\nEnter Choice : ");
              scanf("%d",&toss);
              ts=1 + (rand() % 2);
        if(ts==toss)
        {
         printf("\n\n  you  WON the toss..");
         printf("\n\n enter your choice........\n\n  3 for BATTING..\n\n  4 for BOWLING..");
         scanf("%d",&d);
     }
     else
     {
      printf("\n\n you loose the toss.......\n\n opponent elected to BAT First");
      d=4;
     }
     if(d==3)
     {
                         bat();
                            bowl();
                            if(score1<score)
                            {
                                printf(" \n\n  HURRY....you WON the match....");
       }
       else if(score1==score)
       {
        printf("\n\n  MATCH TIED");
       }
       else
       {
        printf("\n\n  ALAS.....you LOOSE the match.....try again");
       }   
                    }
                    else
                    {
                            bowl();
                            bat();
                            if(score1<score)
                            {
                                printf(" \n\n  HURRY....you WON the match....");
       }
       else if(score1==score)
       {
        printf("\n\n  MATCH TIED");
       }
       else
       {
        printf("\n\n  ALAS.....you LOOSE the match.....try again");
       }
     } 
       
                 break;
                  
         case 2:                                                                   
                 printf("\n\n  *********************How to Play********************* ");
                 printf("\n Enter any numbers from 1 to 6  \n\n If your number and the computers number are same you are out \n\n If not that number will be added to your score \n\n Score as much as you can.. \n\n a game with out limit for scoring.... \n \n_______________have fun______________ ");
                 break;
                 
         case 3:                                                                       
                 printf("\n\n *******************About*********************** ");
                 printf("\n WHC - world of hand cricket ");
                 printf("\n this game is based on real hand cricket strategies ");
                 printf("\n developed by :  Jeba singh P ");
                 printf("\n @copyrights reserved ");
                 break;
                 
         default:
               printf("enter a valid option....");
        }
}
