#include<stdio.h>

float celsius_to_kelvin(float C)
{
    return C + 273.15;
}

int main ()
{
    float c;
    printf("enter temperature in celsius: ");
    scanf("%f", &c);

    printf("Temperature in kelvin: %.2f", celsius_to_kelvin(c));
    return 0;
}
