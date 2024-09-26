#include<stdio.h>
int main()
{
    char n;
    printf("entrer un caractere :");
    scanf("%c",&n);
    if(n>='a'&& n <='z')
     printf("majiscule");
    else if(n>='A'&& n <='Z')
     printf("minuscule");
    else
     printf("entrer autre caractere");

    return 0;
}