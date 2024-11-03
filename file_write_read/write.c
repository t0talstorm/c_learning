#include <stdio.h>

int main(){

    FILE *pF = fopen("test.txt", "a");

    // for file at xyz location on pc use -

    FILE *pFF = fopen("D:\\test.txt", "a"); // file at location D:\test.txt



    fprintf(pF ,"\nHELLO how are you") ;
    fprintf(pFF ,"\nHELLO how are you") ;


    fclose(pF);
    fclose(pFF);


    // to remove a file -

     remove("test.txt");

return 0;
}