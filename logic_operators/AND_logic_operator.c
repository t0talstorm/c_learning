#include <stdio.h>
#include <stdbool.h>

int main(){

float temp = 25;
bool sunny = true;

if (temp>0 && temp <= 30 && sunny){

    printf("\n The weather is good");

}
else {
    
    printf("\n The weather is bad");
}
}