#include <stdio.h>
int main(){
//variables
	int anio, edad;
FILE *S;
printf("dime el año de nacimiento: ");
scanf("%d",&anio);

//calculo
edad=2025-anio;

//fichero
S = fopen("resultado.txt", "w");
if (S == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1;
    }

fprintf(S, "la edad es %d", edad);

	fclose(S);
	return 0;
}
