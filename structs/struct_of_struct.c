#include <stdio.h>
#include <string.h>

typedef struct {
    char phone[12];
    char city[10];
    int pincode;
}address;

typedef struct {
    char name[100];
     address addr;
}emp;

void display_emp(  emp *p, int size);
void input_emp_details(  emp *p, int size);

int main(){
    
     emp emp[3] ;

    // printf("size of emp1 : %d\n",sizeof(emp[0]));
    // printf("size of float : %d\n",sizeof(float));
    // printf("size of int : %d\n",sizeof(int));
    // printf("size of char : %d\n\n",sizeof(char));


    int size = sizeof(emp)/sizeof(emp[0]);

    

    strcpy(emp[0].name, "Bob");
    strcpy(emp[0].addr.phone, "1234567890");
    strcpy(emp[0].addr.city, "Bangalore");
    emp[0].addr.pincode = 560001;

    strcpy(emp[1].name, "Bro");
    strcpy(emp[1].addr.phone, "1234567890");
    strcpy(emp[1].addr.city, "Bangalore");
    emp[1].addr.pincode = 560001;

    strcpy(emp[2].name, "Ben");
    strcpy(emp[2].addr.phone, "1234567890");
    strcpy(emp[2].addr.city, "Bangalore");
    emp[2].addr.pincode = 560001;

    // input_emp_details(&emp[0] , size);

    display_emp(&emp[0] , size);

    return 0;
}

void display_emp(  emp *p , int size){
    for (int i = 0; i < size; i++, p++){
    printf("name : %s\t", p->name); 
    printf("phone : %s\n", p->addr.phone);
    printf("city : %s\n", p->addr.city);
    printf("pincode : %d\n\n", p->addr.pincode);
    }
}

void input_emp_details(  emp *p, int size) {

     for (int i = 0; i < size ; i++, p++)
     {
        printf("Enter the name of the emp: ");
        scanf("%s", p->name);
        printf("Enter the phone of the emp: ");
        scanf("%s", p->addr.phone);
        printf("Enter the city of the emp: ");
        scanf("%s", p->addr.city);
        printf("Enter the pincode of the emp: ");
        scanf("%d", &p->addr.pincode);
     }
}