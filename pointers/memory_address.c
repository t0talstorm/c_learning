    // memory = an array of bytes within RAM (street)
   // memory block = a single unit (byte) within memory (house), used to hold some value (person)
   // memory address = the address of where a memory block is located (house address)

#include<stdio.h>

int main()
{
   

   char a;
   char b[3];
   int c;
   long int d;
   short e;


   printf("%d bytes\n", sizeof(a));
   printf("%p\n", &a);// p - format specifier for hexa decimal

   printf("%d bytes\n", sizeof(b));
   printf("%p\n", &b);

   printf("%d bytes\n", sizeof(c));
   printf("%p\n", &c);
    
   printf("%d bytes\n", sizeof(d));
   printf("%p\n", &d);
    
   printf("%d bytes\n", sizeof(e));
   printf("%p\n", &e);
     
   

   return 0;
}