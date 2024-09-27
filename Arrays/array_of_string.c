#include <stdio.h>
#include <string.h>

int main(){

    char cars[][10] = {"Mustang","Corvette","Camaro"};

    // to assign individual values -

    strcpy(cars[0],"Tesla");

    // to display -

    for (int i = 0 ; i < sizeof(cars)/sizeof(cars[0]);i++){
        
        printf("%s\n",cars[i]);
    }
}
