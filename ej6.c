#include<stdio.h>
#include <stdlib.h>
int main()
{
 float n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,proA,proG;
 int I,c=0;
 for(I=1;I<=30;I++)
 {  
  printf("Ingrese las 10 notas: ");
  scanf("%f%f%f%f%f%f%f%f%f%f",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10);
  proA=(n1+n2+n3+n4+n5+n6+n7+n8+n9+n10)/10;
  printf("El promedio del alumno %d es %.2f\n",I,proA);
  c=c+proA;
 }
 proG=c/30;
 printf("El promedio de la clase es: %.2f\n",proG);
return 0;
}