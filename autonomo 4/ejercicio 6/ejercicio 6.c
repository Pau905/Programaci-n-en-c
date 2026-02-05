#include <stdio.h>
#include <conio.h>
int main(){
	int opcion;
	float nota;
	char asignatura[50], nombre[50];
	FILE *F, *G;
	
	
	printf("Dime la asignatura: ");
	gets(asignatura);
	printf("Dime la nota: ");
	scanf("%f", &nota);
	
	printf("Dime el nombre del fichero en que quieres guardarlo: ");
	scanf("%s", nombre);
	F=fopen(nombre,"r");
	if(F==NULL){
		fclose(F);
		G=fopen(nombre,"w");
		fprintf(G,"Asignatura: %s // Nota: %.2f", asignatura, nota);
		fclose(G);
	}else{
		printf("Menu\n\t1. Añadir informacion\n\t2. Escribir de nueve\n");
		scanf("%d", &opcion);
		switch(opcion){
			case 1: fclose(F);
					G=fopen(nombre,"a");
					fprintf(G,"\nAsignatura: %s // Nota: %.2f", asignatura, nota);
				fclose(G);
			break;
			case 2:	 fclose(F);
					G=fopen(nombre,"w");
					fprintf(G,"Asignatura_ %s // Nota: %.2f", asignatura, nota);
				fclose(G); 
			break;
			
			default: printf("opcion incorrecta");
		}
		
	}
	
getch();
return 0;
}
