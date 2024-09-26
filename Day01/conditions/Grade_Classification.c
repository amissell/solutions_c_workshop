#include <stdio.h>

char Grade_Classification(int x)
{
    if (x < 10 && x >= 1 )
    {
        printf("fails");
    }
    else if (x >= 10 && x < 12)
    {
        printf ("Passable");
    }
    else if (x >= 12 && x < 14)
    {
        printf ("Fairly good");
    }
    else if (x >= 14 && x < 16)
    {
        printf ("Good");
    }
    else if (x >= 16)
    {
        printf("Very good");
    }
}

int main()
{
    int c = 15;
    Grade_Classification(c);
    return 0;
}