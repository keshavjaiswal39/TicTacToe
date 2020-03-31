/*****************************************************
-----------WELCOME TO THE GAME~TIC TAC TOE-----------
*****************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

char square[10]={'o','1','2','3','4','5','6','7','8','9'};
int choice,player;

int checkForWin();
void displayBoard();
void markBoard(char mark);

/******************************************************
           FUNCTION TO RETURN GAME STATUS
           1 FOR GAME IS OVER WITH RESULT
            -1 FOR GAME IS IN PROGRESS
           0 GAME IS OVER AND NO RESULT
******************************************************/

int checkForWin()
{
	int returnValue=0;
	
	if (square[1]==square[2] && square[2]==square[3])
    {
    returnValue=1;
    }
   	else if (square[4]==square[5] && square[5]==square[6])
   	{
   	returnValue=1;	
    }
    else if (square[7]==square[8] && square[8]==square[9])
   	{
   	returnValue=1;	
    }
    else if (square[1]==square[4] && square[4]==square[7])
   	{
   	returnValue=1;	
    }
    else if (square[2]==square[5] && square[5]==square[8])
   	{
   	returnValue=1;	
    }
    else if (square[3]==square[6] && square[6]==square[9])
   	{
   	returnValue=1;	
    }
    else if (square[1]==square[5] && square[5]==square[9])
   	{
   	returnValue=1;	
    }
    else if (square[3]==square[5] && square[5]==square[7])
   	{
   	returnValue=1;	
    }
    else if (square[1]!='1' && square[2]!='2' && square[3]!='3' && square[4]!='4' && square[5]!='5' && square[6]!='6' && square[7]!='7' && square[8]!='8' && square[9]!='9')
    {
	returnValue=1;
    }
    else
    {
    	returnValue=-1;
	}
	
    return returnValue;
}


/******************************************************
FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARK
******************************************************/

void displayBoard()
{
	system ("cls");
	printf("\n\n\tTic Toe\n\n");
	printf("Player 1 (X) - Player 2 (0)\n\n\n");
	printf("    |    |    \n");
	printf("  %c |  %c |  %c \n",square[1],square[2],square[3]);
	
	printf("____|____|____\n");
	printf("    |    |    \n");
	
	printf("  %c |  %c |  %c \n",square[4],square[5],square[6]);
	
    printf("____|____|____\n");
	printf("    |    |    \n");
	
	printf("  %c |  %c |  %c \n",square[7],square[8],square[9]);	
	printf("    |    |    \n\n\n");	
}
    
/******************************************************
SET THE BOARD WITH THE CORRCT CHARACTER, X OR O IN THE
              CORRECT SPOT IN THE ARRAY
******************************************************/

void markBoard(char mark)
{
	if (choice == 1 && square[1] == '1')
	square[1] = mark;
	
	else if (choice == 2 && square[2] == '2')
	square[1] = mark;
	
	else if (choice == 3 && square[3] == '3')
	square[1] = mark;
	
	else if (choice == 4 && square[4] == '4')
	square[1] = mark;
	
	else if (choice == 5 && square[5] == '5')
	square[1] = mark;
	
	else if (choice == 6 && square[6] == '6')
	square[1] = mark;
	
	else if (choice == 7 && square[7] == '7')
	square[1] = mark;
	
	else if (choice == 8 && square[8] == '8')
	square[1] = mark;
	
	else if (choice == 9 && square[9] == '9')
	square[1] = mark;
     
    else
    {
    	printf("Invalid Move");
    	player--;
    	getch();
	}
}

/****************************************************
------------------Driver Program---------------------
*****************************************************/

int main()
{
    int gamestatus;
    char mark;
    player = 1;
    do 
	{
		displayBoard();
		player = (player%2)?1:2;
		printf("Player %d,Enter Your number: ",player);
		scanf("%d",&choice);
		mark = (player==1)? 'X' : 'O';
		markBoard(mark);
		gamestatus=checkForWin();
		player++;
	}
    while (gamestatus ==-1);
    
   return 0;
}
