#include <stdio.h>
#include <ctype.h>

int main(){

    char unit;
    float temperature;

    printf("please enter what unit the temperature is in (C) or (F) : ");
    scanf("%c",&unit);
    
    unit = toupper(unit);

    switch (unit)
    {
    case 'C':
        printf("Please enter the temperature in celsius: ");
        scanf("%f",&temperature);

        temperature = (temperature* 9 / 5)+32;

        printf("the temperature in fahrenheit is : %.2f degrees", temperature);

        break;

    
    case 'F':
        printf("please enter the temperature in fahrenheit : ");
        scanf("%f",&temperature);

        temperature = (temperature-32)*5 / 9;
        printf("the temperature in celsius is : %.2f degrees", temperature);

    break;
    default:
        printf("Please enter a valid unit");

        break;
    }

    return 0;
}