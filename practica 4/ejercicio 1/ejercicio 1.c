#include <stdio.h>

int main(){
	int edad;
	char nombre[40], NIF[20];
	float creditos;
	
	FILE *F;
	
	F=fopen("datos.txt", "r");
	
		if (F == NULL) {
    printf("Error al abrir el archivo.\n");
    return 1;
}
	
	
	fscanf(F,"%s", nombre);
	fscanf(F,"%s", NIF);
	fscanf(F,"%d", &edad);
	fscanf(F,"%f", &creditos);
	
	fclose(F);
	if (edad<=18 && creditos<=30 ){
		printf("%s",nombre);
		}
	
return 0;	
}
