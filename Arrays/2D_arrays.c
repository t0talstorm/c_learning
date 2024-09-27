#include <stdio.h>

int main(){

int number[2][3]={
                    {1 , 2 , 3},
                    {4 , 5 , 6}
                }; // bulk assignment of 2d array

 number[0][0]= 0 ;
 number[0][1]= 1 ; // individual assignment of values in a array
 number[0][2]= 2 ;
 number[1][0]= 3 ;
 number[1][1]= 4 ;
 number[1][2]= 5 ;


int rows = sizeof(number)/sizeof(number[0]);
int coloumns = sizeof(number[0])/sizeof(number[0][0]);

 // Printing a 2D array (we have to use nested loops)

 for (int i = 0 ; i < rows ; i++){
    for (int j = 0 ; j < coloumns ; j++){
        printf("%d\t",number[i][j]);
       
    } printf("\n");
 }

 return 0;
}