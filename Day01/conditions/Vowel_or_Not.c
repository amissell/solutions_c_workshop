#include<stdio.h>

int Vowel_or_Not(char c)
{
    switch (c)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        printf ("vowel");
        break;
        default:
        printf ("Not");
    }
}

int main ()
{
    char x = 'a';
    Vowel_or_Not(x);
    return (0);

}