#include <stdio.h>

int Temperature_to_celsius(int c)
{
    if (c < 0)
    {
        printf("Solid");
    }
    else if (c < 100 && c >= 0)
    {
        printf("Liquid");
    }
    else if (c >= 100)
    {
        printf ("Gaz");
    }
}

int main ()
{

    int c = -100;
    printf ("%s", Temperature_to_celsius(c));
    return 0;
}