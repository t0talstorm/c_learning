#include <stdio.h>
#include <string.h>

int main(){
    char name[25];
    int age;

    
    printf("\n whats your name? ");
    //scanf("%s"&name)
    fgets(name, 25,stdin);
    
    printf("\n how old are you? ");
    scanf("%d", &age);


    printf("\nyou are %d years old and your name is %s",age,name);
    

    return 0;

}