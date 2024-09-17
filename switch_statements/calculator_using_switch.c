#include <stdio.h>

int main(){

    char operator;

    float num1;
    float num2;
    float result;

    printf("\nplease enter a operator (+),(-),(*),(/) : ");
    scanf("%c",&operator);

    printf("\nPlease enter the first number : ");
    scanf("%f",&num1);

    printf("\nPlease enter the second number : ");
    scanf("%f",&num2);


    switch (operator)
    {
    case '+' :
        
        result = num1 + num2;
        printf("the addition of the two numbers is %.2f",result);

        break;

     case '-' :
        
        result = num1 - num2;
        printf("the substraction of the two numbers is %.2f",result);

        break;

     case '*' :
        
        result = num1 * num2;
        printf("the multiplication of the two numbers is %.2f",result);

        break;

     case '/' :
        
        result = num1 / num2;
        
        if(num2 == 0){

            printf("denominator zero is not possible");
        }
            else{
        printf("the divison of the two numbers is %.2f",result);
            }
        break;

    default:
        printf("Please enter a valid operator");
        break;
    }

    return 0;
}