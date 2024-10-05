#include <stdio.h>

unsigned int Factorial_of_a_Number(unsigned int n)
{
    unsigned int x = 1;
    unsigned int i;

    if (n == 0)
    {
        return 1;
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            x *= i;
        }
        return x;
    }
}

int main ()
{

unsigned int pro = 0;
printf ("%d",Factorial_of_a_Number(pro));
return (0);

}