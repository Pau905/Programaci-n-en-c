#include <stdio.h>

int main(){
	float precio_compra, margen, ganancia, precio_venta;	
printf("Introduce el precio de compra (€): ");
scanf("%f", &precio_compra);
printf("\nIntroduce el margenn de ganancia (%%): ");
scanf("%f", &margen );

ganancia=precio_compra * (margen/100);
precio_venta=precio_compra+ganancia;

printf("\nLas ganancias son %f y el precio de venta es %f ", ganancia, precio_venta);

return 0;

}
