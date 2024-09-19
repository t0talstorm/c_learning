#include <stdio.h>
#include <string.h>

int main() {
    char name[25] = "";  // Initialize the array to an empty string

    while (strlen(name) == 0) {  // Entry control loop

        printf("What is your name? ");

        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';  
    }

    printf("Hello %s\n", name);

    return 0;
}
