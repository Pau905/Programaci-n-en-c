#include <stdio.h>
#include <conio.h>

int main() {
    FILE *F;
    char nombre[50];
    int edad, edadMax;

    F = fopen("fichero.txt", "r");
    if (F == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }

while(fgets(nombre,50,F)!=NULL){
	fscanf(F, "%d", &edad);
	if(edadMax<edad){
		edadMax=edad;
	}
}

printf("%d", edadMax);
    fclose(F);
getch ();
return 0;
}
