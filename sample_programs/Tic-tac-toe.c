#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

char board[3][3];
const char PLAYER = 'X';
const char COMPUTER = 'O';

void resetBoard();
void printBoard();
int checkFreeSpaces();
void playermove();
void computermove();
char checkwinner();
char printwinner(char);

int main(){

char winner = ' ';

    resetBoard();

    while(winner == ' ' && checkFreeSpaces() != 0)
      {
         printBoard();

         playermove();
         winner = checkwinner();
         if(winner != ' ' || checkFreeSpaces() == 0)
         {
            break;
         }

         computermove();
         winner = checkwinner();
         if(winner != ' ' || checkFreeSpaces() == 0)
         {
            break;
         }
      }

    printBoard();
    printwinner(winner);
    return 0;
}



void resetBoard(){
    for(int i = 0 ; i < 3 ; i++)
    {for(int j = 0 ; j <3 ; j++){

        board[i][j] = ' ' ;
        }
    }

}
void printBoard(){
    printf(" %c | %c | %c ", board[0][0] , board[0][1] , board[0][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[1][0] , board[1][1] , board[1][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[2][0] , board[2][1] , board[2][2]);
    printf("\n");

}
int checkFreeSpaces(){

int freespaces = 9;

    for(int i = 0 ; i < 3 ; i++)
    {

        for(int j = 0 ; j < 3 ;j++)
        {

            if (board[i][j] != ' ')
            {

                freespaces--;
            }
        }
    }
    return freespaces;
}
void playermove()
{

    int x;
    int y;

    do{
        printf("Enter row number (1-3): ");
            scanf("%d",&x);
            x--;

        printf("Enter coloumn number (1-3): ");
            scanf("%d",&y);
            y--;

        if(board[x][y] != ' ')
        {
            printf("Invalid move !!!!! ");
        }
        else
        {            
            board[x][y] = PLAYER;
            break;
        }

    }while(board[x][y] != ' ');
}
void computermove(){

    //creats a seed based on current time

 srand(time(0));
 int x ;
 int y ;

 if (checkFreeSpaces()>0)
    {
        do
        {
            x = rand()%3;
            y = rand()%3;

        }while (board[x][y] != ' ');

        board[x][y] = COMPUTER;

    }
    else
    {
        printwinner(' ');
    }

}
char checkwinner(){

    //check rows 
    for(int i = 0 ; i <3 ; i++){

        if(board[i][0] == board[i][1] && board[i][1]== board[i][2] && board[i][0] != ' '){
            return board[i][0];

        }
    }

  //check coloumns 
    for(int i = 0 ; i <3 ; i++){

        if(board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[i][0] != ' '){
            return board[0][i];

        }
    }

     //check diagonals 

        if(board[0][0] == board[1][1] && board[1][1]== board[2][2] && board[0][0] != ' '){
            return board[0][0];

        }else if(board[0][2] == board[1][1] && board[1][1] == board[0][0] && board[0][0] != ' '){
            return board[1][1];

        }
        return ' ';
    }

char checkWinner()
{
   //check rows
   for(int i = 0; i < 3; i++)
   {
      if(board[i][0] == board[i][1] && board[i][0] == board[i][2])
      {
         return board[i][0];
      }
   }
   //check columns
   for(int i = 0; i < 3; i++)
   {
      if(board[0][i] == board[1][i] && board[0][i] == board[2][i])
      {
         return board[0][i];
      }
   }
   //check diagonals
   if(board[0][0] == board[1][1] && board[0][0] == board[2][2])
   {
      return board[0][0];
   }
   if(board[0][2] == board[1][1] && board[0][2] == board[2][0])
   {
      return board[0][2];
   }

   return ' ';
}


char printwinner(char winner){

    if(winner == PLAYER)
    {
        printf("yeppieeee !!! you win");

    }else if (winner == COMPUTER)
    {
        printf("NOOOBBB u lost ahhahahha");
    }else{
        printf("IT's A TIEEE");
    }
    


}
