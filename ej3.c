#include <stdio.h>
int main()
{
    int n1 = 0, n2 = 0, i;
    printf("ingrese Ingrese 2 numeros: ");
    scanf("%i %i", &n1, &n2);
    if (n1 < n2)
    {
        for (i = n1 + 1; i < n2; i++)
        {
            printf("%i ", i);
        }
    }
    else
    {
        for (i = n2 + 1; i < n1; i++)
        {
            printf("%i ", i);
        }
    }
    return 0;
}
