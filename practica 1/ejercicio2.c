#include <stdio.h>

int main(){
	printf("Entrada de datos de un alumno\n\n\n");
	
	char nombre[50], apellido1[50], apellido2[50]; 
	printf("Nombre: ");
	gets(nombre);
	printf("Primer apellido: ");
	gets(apellido1);
	printf("Segundo apellido: ");
	gets(apellido2);
	
	char NIF[20];
	printf("NIF: ");
	scanf("%s", NIF);
	
	char sexo;
	printf("Sexo (H/M): ");
	scanf("\n%c", &sexo);
	
	float creditos;
	printf("Numero de creditos matriculados: ");
	scanf("%f", &creditos);
	
	printf("----Datos introducidos----\n\n\n");
	printf("Nombre completo: %s %s %s\n", nombre, apellido1, apellido2);
	printf("NIF: %s\n", NIF);
	printf("Sexo: %c\n", sexo);
	printf("Numero de creditos matriculados: %f\n", creditos);
	
	getch();
	return 0;
	
}
