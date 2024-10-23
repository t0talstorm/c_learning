#include <stdio.h>

void sort(char array[], int size);
void printarray(char array[],int size);


int main(){

    char array[] = {'D' , 'A' , 'F' , 'E' , 'B' , 'C' , 'Z' , 'X' , 'Y'};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array,size);
    printarray(array,size);

}

void sort(char array[], int size){

    for(int i = 0 ; i < size-1 ;i++){
        for(int j = 0 ; j < size-i-1;j++){ // j should be equal to zero (ask sir)
            if(array[j]>array[j+1]){ 
                // can reverse the operator here from '>' to '<' for decending order
                
                int temp = array [j];
                array [j] = array[j+1];
                array [j+1] = temp;
            }
        }
    }
}

void printarray(char array[],int size){
    for (int i = 0 ; i <size ; i++){
        printf("%c\t",array[i]);
    }
}