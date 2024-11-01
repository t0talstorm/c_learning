/* we use pseudo random numbers to generate statistically random values 

we do not use these in any sort of cyptographic secureity as they can be reproduced */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(0));

    //assigning 

    int number1 = (rand()%20)+1;
    int number2 = (rand()%6)+1;
    int number3 = (rand()%5)+1;

    //printing 

    printf("%d\n",number1);
    printf("%d\n",number2);
    printf("%d\n",number3);
}