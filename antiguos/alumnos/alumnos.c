#include <stdio.h>
#include <string.h>
#define A 16 /* número de alumnos */
#define D 50 /* número de días de clase */
#define FALTAS 5 /* número de faltas permitidas */
void carga(int asistencias[A][D]){
	int i,j;
	FILE *f;
	
	f=fopen("lista.txt", "r");
	for (i=0;i<A;i++){
		for(j=0;j<D;j++){
			fscanf(f, "%d", &asistencias[i][j]);
		}
	}
	fclose(f);
}
void apunta(int dia, int asistencias[A][D]){
	int i,j;
	char respuesta;
	for(i=0;i<A;i++){
		printf("Ha venido hoy el alummo %d (S/N): ", i+1);
		scanf(" %c", &respuesta);
		if(respuesta=='S'){
			asistencias[i][dia-1]=1;
		}else if(respuesta=='N'){		
			asistencias[i][dia-1]=0;
		}		
	}
}
void faltan(int dia, int asistencias[A][D]){
	int i,j, faltas;
	printf("Alumnos con mas de 5 faltas de asistencia: ");
	for (i=0;i<A;i++){
		faltas=0;
		for(j=0;j<dia;j++){
			if(asistencias[i][j]==0){
				faltas++;
			}
		}
		if(faltas>FALTAS){
			printf("%d  ", i+1);
		}
	}
	printf("\n");
}

void guarda(int asistencias[A][D]){
	int i,j;
	FILE *f;
	
	f=fopen("lista.txt", "w");
	for (i=0;i<A;i++){
		for(j=0;j<D;j++){
			fprintf(f, "%d ", asistencias[i][j]);
		}
		fprintf(f, "\n");
	}
	fclose(f);
}

int main(){
int asistencias[A][D],dia;
	carga(asistencias);
 		printf("Día de clase: "); 
 		scanf("%d",&dia);
	apunta(dia,asistencias);
	faltan(dia,asistencias);
	guarda(asistencias);
 return 0;} 
