#include <stdio.h>

int Even_odd(int x)
{
    if ((x % 2) == 0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
}

int main ()
{
    int a = 15;
    Even_odd(a);
    return (0);
}