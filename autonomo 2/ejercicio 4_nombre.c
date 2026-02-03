#include <stdio.h>
#include <string.h>

int main(){
	char nombre[100];
	printf("Dime tu nombre: ");
	fgets(nombre, sizeof(nombre), stdin);
	
	printf("Hola, %s ", nombre);
	
	return 0;
	
}
