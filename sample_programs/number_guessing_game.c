#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MAX = 100;
    const int MIN = 1;
    int guess =0 , guesses , answer;

    srand(time(0));

    answer = (rand() % MAX )+ MIN;

    do{

        printf("\n Enter a guess : ");
        scanf("%d",&guess);

        if (guess > answer)
        {
            printf("\nNOOOOO its too high !!!");

        }else if(guess < answer){
            printf("NOOOOO its too low !!!");
        
        }else if (guess == answer){

        printf("correct !!");
        
        }
        guesses++;
    }while(guess != answer);
    
    printf("\n***************************************************");
    printf("\n yeyyyy!! the answer was : %d",answer);
    printf("\n The number of guesses you took were: %d",guesses);
    printf("\n***************************************************\n");

    return 0;
}
