#include <stdio.h>

void birthday(char name[], int age){

    printf("\n Happy birthday dear %s!",name);
    printf("\n you are %d years old ! ", age);
}
int main(){
    char name[25];
    int age;
    
    printf("Enter your name : ");
    scanf("%s",&name);
    printf("Enter your age : ");
    scanf("%d",&age);

    birthday(name,age); // sending name , age to birthday function

    return 0;

}