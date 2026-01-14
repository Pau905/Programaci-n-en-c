#include <stdio.h>

int main(){
	printf("----Division de dos numeros enteros----\n\n");
	int dividendo, divisor, resto;
	printf("Dividendo: ");
	scanf("%d", &dividendo); 
	printf("Divisor: ");
	scanf("%d", &divisor);
	
	resto=dividendo % divisor;
	printf("El resultado de dividir %d entre %d es %d", dividendo, divisor, resto);
	
	return 0;
	
}
