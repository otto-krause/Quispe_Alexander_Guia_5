#include <stdio.h>
int main()
{
    int i,prom, suma = 0, num = 0, mayor = 0;
    printf("ingrese Ingrese 15 numeros: ");
    for (i = 0; i <= 14; i++)
    {
        scanf("%i", &num);

        suma = suma + num;
        if (num > mayor)
        {
            mayor = num;
        }
    }
    prom = suma / 15;
    printf("El promedio es %i", prom);
    printf("\nEl numero mayor es %i", mayor);
    return 0;
}