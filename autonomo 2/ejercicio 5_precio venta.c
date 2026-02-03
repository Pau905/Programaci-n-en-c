#include <stdio.h>

int main(){
	float precio_compra, margen, ganancia, precio_venta;
	printf("Introduzca el precio de compra del producto: ");
		scanf("%f",&precio_compra);
	printf("Introduzca el margen de ganancia deseado (en tanto por cien): ");
		scanf("%f",&margen);
	
	if(margen<0 || margen>101){
	printf("El margen no es correcto");
	}else{
		ganancia = precio_compra*(margen/100);
		precio_venta=precio_compra+ganancia;
		printf("El precio de venta sera de %f euros", precio_venta);
	}
	
	return 0;
	
}
