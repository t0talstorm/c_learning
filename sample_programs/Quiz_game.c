#include <ctype.h>
#include <stdio.h>

int main() {

  char questions[][30] = {"1. What is the programs name ", "2.who is you",
                          "3.what is your age"};

  char options[][15] = {"A. Repl it", "B. VS code", "C. Notepad",
                        "A. me",      "B. you",     "C. your mom",
                        "A. 12",      "B. 13",      "C. 18"};

  char answers[3] = {'B', 'C', 'C'};
  int number_of_questions = sizeof(questions) / sizeof(questions[0]);
  char guesses;
  int score = 0;

  printf("\n******************************\n");
  printf("QUIZ GAME\n");
  printf("\n******************************\n");

  for (int i = 0; i < number_of_questions; i++) {

    printf("\n%s", questions[i]);

    for (int j = i * 3; j < (i * 3) + 3; j++) {

      printf("\n%s", options[j]);
    }


    printf("\nEnter your guess : ");
    scanf("%c", &guesses);
    char temp;
    scanf("%c",&temp);

 guesses = toupper(guesses);

        if(guesses == answers[i]){
            printf("Correct\n");
            score++;
        }else {
            printf("wrong :(\n");

            }

printf("Current Score: %d/%d\n", score, i+1); 

  }
  printf("\n******************************\n");
  printf("FINAL SCORE %d/%d", score, number_of_questions);
  printf("\n******************************\n");

  return 0;
}