#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    char Question[100];
    char option1[50];
    char option2[50];
    char option3[50];
    char option4[50];
    char Answer[2]; 
} Quiz;

int main() {
    Quiz ques[5];

    strcpy(ques[0].Question, "Who is the worst teacher?");
    strcpy(ques[0].option1, "A. Neha ma'am");
    strcpy(ques[0].option2, "B. Rupali ma'am");
    strcpy(ques[0].option3, "C. Sandra ma'am");
    strcpy(ques[0].option4, "D. Amar Jain");
    strcpy(ques[0].Answer, "D");

    strcpy(ques[1].Question, "Who is the best teacher?");
    strcpy(ques[1].option1, "A. Neha ma'am");
    strcpy(ques[1].option2, "B. Rupali ma'am");
    strcpy(ques[1].option3, "C. Sandra ma'am");
    strcpy(ques[1].option4, "D. Amar Jain");
    strcpy(ques[1].Answer, "B");

    strcpy(ques[2].Question, "Who is the Physics teacher?");
    strcpy(ques[2].option1, "A. Neha ma'am");
    strcpy(ques[2].option2, "B. Rupali ma'am");
    strcpy(ques[2].option3, "C. Sandra ma'am");
    strcpy(ques[2].option4, "D. Amar Jain");
    strcpy(ques[2].Answer, "B");

    strcpy(ques[3].Question, "Who is the CTI teacher?");
    strcpy(ques[3].option1, "A. Neha ma'am");
    strcpy(ques[3].option2, "B. Rupali ma'am");
    strcpy(ques[3].option3, "C. Sandra ma'am");
    strcpy(ques[3].option4, "D. Amar Jain");
    strcpy(ques[3].Answer, "C");

    strcpy(ques[4].Question, "Who is the c - programing teacher?");
    strcpy(ques[4].option1, "A. Neha ma'am");
    strcpy(ques[4].option2, "B. Rupali ma'am");
    strcpy(ques[4].option3, "C. Sandra ma'am");
    strcpy(ques[4].option4, "D. Sanket sir");
    strcpy(ques[4].Answer, "D");

    int score = 0;
    char choice;  
    
    for (int i = 0; i < 5; i++) {
        printf("\nQuestion number %d: \n", i + 1);  
        printf("%s\n", ques[i].Question);
        printf("%s\n", ques[i].option1);
        printf("%s\n", ques[i].option2);
        printf("%s\n", ques[i].option3);
        printf("%s\n", ques[i].option4);

        printf("Enter your answer: ");
        

        scanf("%c", &choice);
        choice = toupper(choice);

        if (choice == ques[i].Answer[0]) {
            printf("Correct! Yeppieeee!\n");
            score++;
        } else {
            printf("Wrong answer! The correct answer was: %s\n", ques[i].Answer);
        }


        printf("Your current score is %d / 5\n", score);
                while ((getchar()) != '\n'); 

    }

    
    printf("\nYour final score is %d / 5\n", score);

    return 0;
}
