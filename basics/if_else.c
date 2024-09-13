#include <stdio.h>

int main(){

    int age;

    printf("please enter your age : ");
    scanf("%d",&age);

    if(age >= 18 ){
        printf("you are over 18 yey");
    }
    else if(age <= 0){
        printf("Liar");
    }    
    else{
        printf("you are not 18 :(");
    }
    return 0;

}