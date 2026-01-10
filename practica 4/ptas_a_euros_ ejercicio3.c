#include <stdio.h>
int main() {

int opciones;
float cantidad, resultado;


printf("Menu de opciones\n\t1-Ptas a euros\n\t2-Euros a petas\n");
scanf("%d",&opciones);
switch(opciones){
	
case 1: 
printf("Dime tu cantidad de dinero en Ptas: ");
scanf("%f", &cantidad);
resultado = cantidad/166.386;
printf("%f Pesetas son %f Euros", cantidad, resultado);
break;
case 2: 
printf("Dime tu cantidad de dinero en Euros: ");
scanf("%f", &cantidad);
resultado = cantidad*166.386;
printf("%f Euros son %f Pesetas", cantidad, resultado);
break;
default: printf("opcion incorrecta");

return 0;

}}
