#include <stdio.h>

float kilometers_to_yarrds(float km)
{
return km * 1093.61;
}

int main()
{
    int km = 10;
    printf("the distnce in yards: %.2f", kilometers_to_yarrds(km));   
}