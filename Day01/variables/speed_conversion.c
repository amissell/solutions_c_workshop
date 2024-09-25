#include <stdio.h>

double KilometersPerHour_to_MetersPerSecond(double kmh)
{
    return kmh * 0.27778;
}

int main ()
{
    double ms = 1000;
    printf("Speed in meter per seconds:  %lf", KilometersPerHour_to_MetersPerSecond(ms));
    return (0);

}