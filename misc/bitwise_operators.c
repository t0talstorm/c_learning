//special programing operators used in bit level programing 

#include <stdio.h>

int main(){

    int x = 6; // 6 = 00000110
    int y = 12;//12 = 00001100
    int z = 0; // 0 = 00000000

    // & operator - AND operator 
    z = x & y; 
    printf("AND = %d\n",z);

    // | operator - OR operator 
    z = x | y; 
    printf("or = %d\n",z);

    // ^ operator - XOR operator 
    z = x ^ y; 
    printf("XOR = %d\n",z);

    // << operator - left shift operator 
    z = x << y; 
    printf("LEFT SHIFT = %d\n",z);

    // >> operator - right shift operator 
    z = x >> 1; 
    printf("RIGHT SHIFT = %d\n",z);

    // ~ operator - complement operator 
    z = ~x; 
    printf("COMPLEMENT = %d\n",z);








}