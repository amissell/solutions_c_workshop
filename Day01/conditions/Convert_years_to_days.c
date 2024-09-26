#include <stdio.h>

void convertYearsToDays(int years) 
{
    int days = years * 365;
    printf("%d", days);
}

int main() 
{
    int years = 1;
    
    convertYearsToDays(years);
    return 0;
}
