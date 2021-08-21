#include<stdio.h>
#include <stdlib.h>
int main()
{
 int suel,cant1=0,cant2=0,I;
 for(I=1;I<=20;I++)
 {
  printf("Ingrese el sueldo:");
  scanf("%d",&suel);
  if (suel>2000)
  {
  cant1=cant1+1;
  }
  else
  {
  cant2=cant2+1;
  }}
 printf("%d personas ganas más de $2000 y %d ganan menos de $2000",cant1,cant2);
return 0;
}