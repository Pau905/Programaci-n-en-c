#include <stdio.h>


int main(){
	char nombre[40], apellido1[20], apellido2[20], NIF[10];
	int edad;
	
		FILE *F;
	
	F=fopen("usuario1.txt", "r");
	
	fgets(nombre, 40, F);
	fscanf(F,"%s", apellido1);
	fscanf(F,"%s", apellido2);
	fscanf(F,"%s", NIF);
	fscanf(F,"%d",&edad);
	
 	fclose(F);
 	

 	
 	
	printf("\nnombre: %s", nombre);
	printf("\napellido1:%s", apellido1);
	printf("\napellido2:%s", apellido2);
	printf("\nNIF:%s", NIF);
	printf("\nEdad:%d", edad);
	
	

return 0;

}
