#include <stdio.h>
#include <conio.h>
int main(){
	int valor_sensor;
	float valor_normalizado;
	printf("Introduzca el valor del sensor entre 0 y 1023: ");
	scanf("%d", &valor_sensor);
	
	if (valor_sensor<0 || valor_sensor>1023){
		printf("Este valor (%d) no se puede dar.", valor_sensor);
		return 1;
	}
	
	valor_normalizado = valor_sensor / 1023.0;
	

	
	printf("El valor normalizado del sensor sera %f", valor_normalizado);
	
	getch();
	
	return 0;	
}
