#include<stdio.h>
#include <stdlib.h>
int main()
{
 int I,I2,dv,vtotal,vm,vgen,mv;
 for(I=1;I<=20;I++)
 {
  vtotal=0;	
 for (I2=1;I2<=15;I2++)
 {  
  printf("Venta del dia %d :",I2);
  scanf("%d",&dv);
  vtotal=vtotal+dv;
  if (vm<dv)
  {
  vm=dv;
  mv=I;
  }}
  printf("La venta total del vendedor %d es: %d\n",I,vtotal);
  vgen=vgen+vtotal;
 }
 printf("La venta general es %d y la mejor venta es la del vendedor %d por: %d",vgen, mv, mv);
return 0;
}