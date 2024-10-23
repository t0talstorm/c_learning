 /* pointer = a "variable-like" reference that holds a memory address to another variable, array, etc.
              some tasks are performed more easily with pointers
              * = indirection operator (value at address)
*/
#include <stdio.h>

void printAge(int *pAge) // referencing the pointer 
{


   printf("\nYou are %d years old\n", *pAge); //dereferencing the pointer 
}

int main()
{
  
   int age = 18;
   int *pAge = NULL;// declaring the pointer 
   pAge = &age; // asigning the value to pointer // this can be done in one step also

   printAge(pAge);

   printf("address of age: %p\n", &age);
   printf("address of pAge: %p\n", pAge);
   
   printf("size of age: %d bytes\n", sizeof(age));
   printf("size of pAge: %d bytes\n", sizeof(pAge));
   
   printf("value of age: %d\n", age);
   printf("value at stored address of pAge : %d\n", *pAge); //dereferencing


    printAge(pAge);
   return 0;
}