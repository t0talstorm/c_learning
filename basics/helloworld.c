#include <stdio.h>

int main(){
   

  int x; //decleration

  x = 123; // initialization 
    
  int y = 321; // decleration + initialization 
    
  int age = 21;
    
  float gpa = 2.05; // floating point number 
    
  char grade = 'C'; //single character 
  
  char name[] = "Bro"; //array of characters 
        
  printf("hello %s\n", name);
  printf("your are %d years old\n",age);
  printf("your average grade is %c\n",grade);
  printf("your gpa %f is %s\n",gpa,name);


  return 0;
}