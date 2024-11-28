#include <stdio.h>

int main(){

    FILE *pF = fopen("poem.txt" , "r"); 
    /* the modes in which file pointer can be opened are 
      r, w, a, r+, w+, a+, rb, wb, ab, rb+, wb+, ab+ 
    which stand for
     read, write, append, read and write, write and read, append and read, read in binary, write in binary, append in binary, read and write in binary, write and read in binary, append and read in binary respectively.   
    */
   
   char buffer[255];

    if(pF == NULL){

        printf("unable to open file");
    }
    else{
        while (fgets(buffer, 255 ,pF) != NULL) {
        
            printf("%s",buffer);
        }
    }

    printf("\n");
    fclose(pF);

    return 0;

}