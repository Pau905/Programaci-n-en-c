#include <stdio.h>

int main(){
	char nombrep[50], apellidop1[50], apellidop2[50], nombrem[50], apellidom1[50], apellidom2[50], nombreh[50]; 
	printf("Nombre padre: ");
	gets(nombrep);
	printf("Primer apellido padre: ");
	gets(apellidop1);
	printf("Segundo apellido padre: ");
	gets(apellidop2);
	
	printf("Nombre de la madre: ");
	gets(nombrem);
	printf("Primer apellido madre: ");
	gets(apellidom1);
	printf("Segundo apellido madre: ");
	gets(apellidom2);
	
	printf("Nombre hijo/a: ");
	gets(nombreh);
	
	printf("Su nombre completo seria %s %s %s.\no tambien podria ser %s %s %s.", nombreh, apellidop1, apellidom1, nombreh, apellidom1, apellidop1);
	
	

	return 0;
	
}
