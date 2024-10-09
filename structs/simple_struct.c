/*struct is a colection of related members ("variables")
there can be different types of datatypes listed under one name is a block of memory*/

#include <stdio.h>
#include <string.h>

//creating a struct 

struct player 
{
    char name[12];
    int score;
};

int main(){

    struct player player1;
    struct player player2;

    strcpy(player1.name,"bob");
    player1.score = 4;

    strcpy(player2.name,"ben");
    player2.score = 7;

    printf("hello %s your score is : %d\n",player1.name,player1.score);
    printf("hello %s your score is : %d\n",player2.name,player2.score);
    
}
