#include<stdio.h>
#define N 100
int dim;
void cargar(int matriz[N][N]){
	int i,j;
	FILE *F;
	
	F=fopen("cuadrado.txt", "r");
	   if (F == NULL) {
        printf("Error al abrir el fichero.\n");
        return;
    }
     fscanf(F, "%d", &dim);
     
     
	for(i=0;i<dim;i++){
		for(j=0;j<dim;j++){
		fscanf(F, "%d", &matriz[i][j]);
		}
	}
	fclose(F);
}
int menu(){
	int opc;
	printf("\n--- MENU ---\n");
	printf("1. Visualizar.\n");
	printf("2. comprobar.\n");
	printf("3. Salir.\n");
	printf("Opcion: ");
	scanf("%d", &opc);
	return opc;
}

void visualizacion(int matriz[N][N]){
	int i,j;
	for(i=0;i<dim;i++){
		printf("\n");
		for(j=0;j<dim;j++){
			printf("%d  ", matriz[i][j]);
		}
	}	
}
void comprobar(int matriz[N][N])
{
    int i, j;
    int suma_ref = 0, suma;

    /* Suma de referencia: primera fila */
    for (j = 0; j < dim; j++) {
        suma_ref += matriz[0][j];
    }

    /* Comprobar filas */
    for (i = 1; i < dim; i++) {
        suma = 0;
        for (j = 0; j < dim; j++) {
            suma += matriz[i][j];
        }
        if (suma != suma_ref) {
            printf("El cuadrado NO es casi magico\n");
            return;
        }
    }

    /* Comprobar columnas */
    for (j = 0; j < dim; j++) {
        suma = 0;
        for (i = 0; i < dim; i++) {
            suma += matriz[i][j];
        }
        if (suma != suma_ref) {
            printf("El cuadrado NO es casi magico\n");
            return;
        }
    }

    /* Comprobar diagonal principal */
    suma = 0;
    for (i = 0; i < dim; i++) {
        suma += matriz[i][i];
    }

    if (suma != suma_ref) {
        printf("El cuadrado NO es casi magico\n");
        return;
    }

    printf("El cuadrado es casi magico\n");
}

int main(){
 int opcion, matriz[N][N];
 cargar(matriz); // (1 punto)
 
 do {
 	opcion = menu(); // (0.5 puntos)

 			switch ( opcion ) {
 			case 1:
 					visualizacion(matriz); // 1 punto
 				break;
			case 2:
 					comprobar(matriz); // 1.5 puntos
 				break;
			case 3:
				printf("Saliendo del programa...\n");
 				break;
 
 }
 } while ( opcion != 3 );
 return 0;
}

