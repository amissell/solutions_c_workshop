#include <stdio.h>
#include <math.h>

int main ()
{
    double x, y, z, result;

    printf("enter three numbers: ");
    scanf("%lf %lf %lf", &x, &y, &z);
    result = x * y * z;
    double geometric;
    geometric = pow(result, 1.0 / 3.0);
    printf ("the result is %.2lf" ,geometric);

    return 0;

}