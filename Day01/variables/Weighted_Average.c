#include <stdio.h>

int main()
{
    int x, y, z;
    printf ("enter the first number: ");
    scanf("%d", &x);
    printf ("enter the second number: ");
    scanf("%d", &y);
    printf ("enter the last number: ");
    scanf("%d", &z);

    int result = (x * 2 + y * 3 + z * 5) / (10);
    printf ("%d" ,result);
    return 0;
}