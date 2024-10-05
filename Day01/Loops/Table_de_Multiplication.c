#include <stdio.h>

int Table_de_Multiplication(int a)
{
    int i = 1;
    int x;
    while (i < 11)
    {
        x = a * i;
        printf("%d\n", x);
        i++;

    }
}

int main ()
{
    int c = 4;
    Table_de_Multiplication(c);
    return 0;
}