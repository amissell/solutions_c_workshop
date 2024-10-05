#include <stdio.h>

int main()
{
    int i, s, n;
    n = 4;
    i = 1;
    s = 0;
   
    while (i <= n) 
    {
        s += i;
        i++;
    }
    printf("Sum = %d", s);
    return 0;
}