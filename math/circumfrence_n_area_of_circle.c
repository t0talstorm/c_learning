#include <stdio.h>
#include <math.h>
int main(){

    const float PI = 3.14;

    float radius;

    printf("\n Please enter the radius of the circle: ");
    scanf("%f",&radius);
    
    float circumfrence = 2*PI*radius; 
    float area = PI*pow(radius,2);
    

    printf("The circumfrence of the circle is : %.2f\n",circumfrence);
    printf("The area of the circle is : %.2f\n", area);

    return 0;
}