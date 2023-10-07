#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<windows.h>
    char square[10]={'o','1','2','3','4','5','6','7','8','9'};
    int checkwin();
    void drawBoard();//draw the board
    int main()
    {
    int player=1,i,choice;
//player variable used to track of the playr there are two players  and 1 or 2;
//i is used to check whether the game in progress or not;
    //  choice is used to check the choice from the user(in which position the player placethe mark)
    char mark;//x,O
    do{
        drawBoard();
        player=(player%2)? 1:2;//if player is not divisible by 2 then palyer 1 otherwise 2
        printf("player %d,enter the choice:",player);
        scanf("%d",&choice);
        mark=(player==1)?'x':'O';
        if(choice==1 && square[1]=='1')
         square[1]=mark;
        else if(choice==2 && square[2]=='2')
        square[2]=mark;
         else if(choice==3 && square[3]=='3')
        square[3]=mark;
         else if(choice==4 && square[4]=='4')
        square[4]=mark;
         else if(choice==5 && square[5]=='5')
        square[5]=mark;
         else if(choice==6 && square[6]=='6')
        square[6]=mark;
         else if(choice==7 && square[7]=='7')
        square[7]=mark;
         else if(choice==8 && square[8]=='8')
        square[8]=mark;
         else if(choice==9 && square[9]=='9')
        square[9]=mark;
        else
        {
            printf("invalid option");
            player--;// if player 1 prss ivalid option then the player get another chance by decrementing the value of player bcause after else player value is incremented
            getch();

        }
        i=checkwin();//i=1,if player is won,returns -1 if game is still in progress,or return 0 if player lost game
         player++;
    }while(i==-1);
    drawBoard();
    if(i==1)
    printf("==>player %d won",--player);//because in do while loop player value is incremented
    else
    {
        printf("==>Game draw");

    }
    getch();
    return 0;

    
}
int checkwin(){
    if(square[1]==square[2] && square[2]==square[3])
return 1;
else if(square[4]==square[5] && square[5]==square[6])
return 1;
else if(square[7]==square[8] && square[8]==square[9])
return 1;
else if(square[1]==square[4] && square[4]==square[7])
return 1;
else if(square[2]==square[5] && square[5]==square[8])
return 1;
else if(square[3]==square[6] && square[6]==square[9])
return 1;
else if(square[1]==square[5] && square[5]==square[9])
return 1;

else if(square[3]==square[5] && square[5]==square[7])
return 1;
else if(square[1]!='1' && square[2]!='2' && square[3]!='3'&& square[4]!='4' &&square[5]!='5' && square[6]!='6' && square[7]!='7' &&square[8]!='8' &&square[9]!='9'   )
return 0;
else
return -1;

}
void drawBoard()
{
    system("cls");//clear the screen
    printf("\n\n\t\t#############################* TIC TAC TOE * ################################ \n\n");
    printf("\t\t\tplayer1 (X)-player2 (O) \n\n\n");
    printf("\t\t\t\t\t     |     |     \n");
    printf("\t\t\t\t\t  %c  |  %c  |  %c  \n",square[1],square[2],square[3]);
     printf("\t\t\t\t\t_____|_____|_____\n");
    printf("\t\t\t\t\t  %c  |  %c  |  %c  \n",square[4],square[5],square[6]);
     printf("\t\t\t\t\t_____|_____|_____\n");
    printf("\t\t\t\t\t  %c  |  %c  |  %c  \n",square[7],square[8],square[9]);
    printf("\t\t\t\t\t     |     |     \n");
}