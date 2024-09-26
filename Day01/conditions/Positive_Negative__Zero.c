#include <stdio.h>

int Positive_negative_zer(int x)
{
    if (x < 0)
    {
        printf("Negative");
    }
    else if (x > 0)
    {
        printf("Positive");
    }
    else
    printf("equal to zero");
}


int main ()
{
    int x = -22;
    Positive_negative_zer(x);
    return 0;
}