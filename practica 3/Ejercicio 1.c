#include <stdio.h>
#include <conio.h>

int main(){
	char nombre[40], apellido1[20], apellido2[20], NIF[10];
	int edad;
	
	
	printf("Dime tu nombre: ");
	gets(nombre);
	
	printf("Dime primer apellido: ");
	gets(apellido1);
	
	printf("Dime segundo apellido: ");
	gets(apellido2);
	
	printf("Dime tu NIF: ");
	gets(NIF);
	
	printf("Dime tu edad: ");
	scanf("%d", &edad);
	
	
	FILE *F;
	
	F=fopen("usuario1.txt", "w");
	fprintf(F,"%s\n%s %s\n%s %d", nombre, apellido1, apellido2, NIF, edad );
 	fclose(F);
 	
return 0;
getch;
}
