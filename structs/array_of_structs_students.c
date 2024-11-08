#include <stdio.h>
#include <string.h>

 struct student {
    char name[12];
    float gpa;
} ;

int main(){

    struct student student1 = {"Bob",3.0};
    struct student student2 = {"Bro",2.5};
    struct student student3 = {"Ben",4.0};
    struct student student4 = {"Boy",2.0};

    // creating a array 

    struct student students[] ={student1,student2,student3,student4};

    for (int i = 0 ; i <sizeof(students)/sizeof(students[0]);i++){

        printf("%s\t",students[i].name);
        printf("%.2f\n",students[i].gpa); 

    }

    return 0;
}