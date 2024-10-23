#include <stdio.h>
#include <string.h>

int main(){

    // for characters / numbers 

    char x = 'X';
    char y = 'Y';
    char temp;

    temp = x;
    x = y;
    y = temp;

    printf("%c , %c ",x , y);

    // For strings - 

    char x1[15] = "Water";
    char y1[15] = "Lemonade"; // must make all the strings the same size 
    char temp1[15];

    strcpy(temp1,x1);
    strcpy(x1,y1);
    strcpy(y1,temp1);

    printf("\n%s , %s ",x1 , y1);

}