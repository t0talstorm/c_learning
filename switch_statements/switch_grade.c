#include <stdio.h>

int main(){

    char grade;

    printf("please enter your grade :");
    scanf("%c",&grade);

    switch (grade)
    {
    case 'A':
        printf("yay u have the highest grade");
     
        break;
    case 'B':
        printf("woooahhh well done one more grade to go");
    
        break;
    case 'C':
        printf("dayum u could really have done better");
        break;

    case 'D':
        printf("Atleast u did not fail ");
        break;

    case 'F':
        printf("faliure.");
        break;

    default:
        printf("not a valid grade");
        break;
    }
    
    return 0;

}