#include<stdio.h>

char Uppercase_Alphabet(char c)
{
    if (c >= 65 && c < 91)
    {
        printf ("Uppercase");
    }   
}

int main ()
{
    char c = '.';
    Uppercase_Alphabet(c);
    return 0;
}