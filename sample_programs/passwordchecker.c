//typedef is a reserved keyword that gives a existing datatype a nickname 

#include <stdio.h>
#include <string.h>

typedef struct { // Typedef is used here 
    char name[25];
    char password[12];
    int id;
} user;

int main() {
    char pass_input[12];
    char name_input[25];

    user user1 = {"Bob", "password123", 1523};
    user user2 = {"Ben", "@password12", 2345};

    printf("Please enter your name: ");
    scanf("%s", name_input);

    printf("Please enter your password: ");
    scanf("%s", pass_input);

    if (strcmpi(name_input, user1.name) == 0 && strcmpi(pass_input, user1.password) == 0) {

        printf("Welcome %s! Your ID is %d.\n", user1.name, user1.id);

    } else if (strcmpi(name_input, user2.name) == 0 && strcmpi(pass_input, user2.password) == 0) {

        printf("Welcome %s! Your ID is %d.\n", user2.name, user2.id);

    } else {
        
        printf("Invalid name or password.\n");
    }

    return 0;
}
