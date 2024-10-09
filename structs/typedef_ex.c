//typedef is a reserved keyword that gives a existing datatype a nickname 

#include <stdio.h>
#include <string.h>

typedef struct { // Typedef is used here 
    char name[25];
    char password[12];
    int id;
} user;

int main() {

    user user1 = {"Bob", "password123", 1523};  // this is used insted of " struct user user1 "
    user user2 = {"Ben", "@password12", 2345};

    
    return 0;
}
