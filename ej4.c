#include <stdio.h>

int main()
{
   int a, i, fact = 1;
   printf("Ingrese un numero: ");
   scanf("%i", &a);
   for (i = a; i > 1; i--)
   {
      fact = fact * i;
   }
   printf("El factorial es %i\n", fact);
   return 0;
}