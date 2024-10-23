#include <stdio.h>

void sort(int array[], int size);
void printarray(int array[],int size);


int main(){

    int array[] = {9 , 1 , 8 , 2 , 7 , 3 , 6 , 4 , 5};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array,size);
    printarray(array,size);

}

void sort(int array[], int size){

    for(int i = 0 ; i < size-1 ;i++){
        for(int j = 0 ; j < size-i-1;j++){ // j should be equal to zero 
            if(array[j]>array[j+1]){ 
                // can reverse the operator here from '>' to '<' for decending order
                
                int temp = array [j];
                array [j] = array[j+1];
                array [j+1] = temp;
            }
        }
    }
}

void printarray(int array[],int size){
    for (int i = 0 ; i <size ; i++){
        printf("%d\t",array[i]);
    }
}