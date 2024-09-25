#include <stdio.h>

void Calculation_and_Display_of_Results(int a, int b) {
    printf("%d\n", a + b);
    printf("%d\n", a - b);
    printf("%d\n", a * b);
    printf("%d\n", a / b);
}

int main() 
{
    int a, b;

    a = 4;
    b = 0;

    Calculation_and_Display_of_Results(a, b);

    return 0;
}
