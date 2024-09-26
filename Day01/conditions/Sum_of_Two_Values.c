#include<stdio.h>

int Sum_of_Two_Values(int x, int y)
{
    int res;
    if (x == y)
    {
        res = (x + y)*3;
        printf ("%d", res);
    }
    else
    {
        res = x + y;
        printf ("%d", res);
    }
}

int main ()
{
    int x = 1;
    int y = 2;
    Sum_of_Two_Values(x, y);
    return 0;
}