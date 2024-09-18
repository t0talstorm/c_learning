#include <stdio.h>


// printing the verse of "happy birthday" 3 times 

void birthday(){
     printf("\n Happy Birthday to you!");
     printf("\n Happy Birthday to you!");
     printf("\n Happy Birthday dear...... you!");
     printf("\n Happy Birthday to you!\n");
}

int main(){

    birthday(); //calls upon to "void birthday"
    birthday();
    birthday(); // consider the parantheses as telephone calling upon "birthday" function
 return 0;
}