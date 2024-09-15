#include <stdio.h>
#include <math.h>

int main(){

    float Height;
    float Base;

    printf("Please enter the base of triangle: ");
    scanf("%f",&Base);

    printf("\n Please enter the height of the triangle: ");
    scanf("%f",&Height);

    float Hypo = sqrt(pow(Height,2)+pow(Base,2));

    printf("\nThe hypotenous of the triangle is %.2f ",Hypo);

    return 0;
}
