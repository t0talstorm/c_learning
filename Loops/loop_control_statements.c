#include <stdio.h>

/*
 three types of loop control statements :

    continue; = skips the rest of the code and forces the next iteration of the code 
    break; = exits a loop / switch statement 
    exit(0); = exits the program 
*/

int main (){

    for (int i =1; i<20 ; i++)
    {
        if (i == 13){
            continue; // continue statement 
        }
        printf("%d\n",i);
    }

    printf("\n");

    for (int j =1; j<20 ; j++)
    {
        if (j == 13){
            break; // break statement 
        }
        printf("%d\n",j);
    }


}