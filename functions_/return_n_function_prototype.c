#include <stdio.h>

double square(double x);
 // the above is a function prototype so that if value = missing the program does not compile 

int main(){

// sending value 3.141 to square function and storing the return in "double x"
    double x = square(3.141); 

    printf("%lf",x);
    return 0;

}

double square(double x) // double = datatype to be returned 
{
double result = x*x;

return result; // can be replaced by return x*x to bypass previous line

}