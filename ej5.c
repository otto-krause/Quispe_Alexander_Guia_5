#include <stdio.h>

int main()
{
    int base, expo = 0, pot = 1, i;
    printf("Ingrese 2 la base y exponente\n");
    printf("base:");
    scanf("%d", &base);
    printf("Exponente:");
    scanf("%d", &expo);
    for (i = 1; i <= expo; i++)
    {
        pot = pot * base;
    }
    printf("La potencia es %d", pot);
    return 0;
}