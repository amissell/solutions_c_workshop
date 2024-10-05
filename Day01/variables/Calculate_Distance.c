#include <stdio.h>
#include <math.h>


float distance (int x, int y, int z, int a, int b, int c) 
{
    return sqrt(pow(a- x, 2) + pow(b - y, 2) + pow(c - z, 2));
}

int main() 
{
    int x = 3, y = 4, z = 5; 
    int a = 4, b = 3, c = 2; 
    
    printf("Distance: %f\n", distance(x, y, z, a, b, c));
    
    return 0;
}
