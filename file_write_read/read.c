#include <stdio.h>

int main(){

    FILE *pF = fopen("D:\\poem.txt" , "r");   
    char buffer[255];

 if(pF == NULL){

    printf("unable to open file");
 }
else{
    while (fgets(buffer, 255 ,pF) != NULL) {
    
        printf("%s",buffer);
    }
}
    fclose(pF);
    return 0;
}