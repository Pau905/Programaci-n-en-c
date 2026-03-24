#include <stdio.h>
/*Cuantos superhombres hay*/
#define SUPERVILLANOS 342
#define SUPERHEROES 533
/*Estado de cada batalla*/
#define NO_COMBATE 0
#define GANA_SUPERVILLANO 1
#define EMPATE 2
#define GANA_SUPERHEROE 3
/*Tipificación de buenos y malos*/
#define MALOS 0
#define BUENOS 1
/*Programa principal*/
void Inicia(int Clasific[SUPERHEROES][SUPERVILLANOS]){
	int i,j;
	
	for(i=0;i<SUPERHEROES;i++){
		for(j=0;j<SUPERVILLANOS;j++){
			Clasific[i][j]=NO_COMBATE;			
		}
	}	
}
int dim;
void Carga(int Clasific[SUPERHEROES][SUPERVILLANOS]){
	int i,j;
	FILE *F;
	F=fopen("comic.txt", "r");
	if(F==NULL){
		printf("Error al abrir el fichero");
		return;
	}
	
	fscanf(F, "%d", &dim);
	
	for(i=0;i<dim;i++){
		printf("Hero %d, combates con ", i+1);
		for(j=0;j<dim;j++){
			fscanf(F, "%d", &Clasific[i][j]);	
			printf("Villano %d ", j+1);	
			if(Clasific[i][j]==1){
				printf("DERROTA\n");
			}else if(Clasific[i][j]==3){
				printf("VICTORIA\n");
			}else{
				printf("EMPATE\n");
	}	
		}
		printf("\n");
	}	
	fclose(F);
}






int Ganador(int Clasific[SUPERHEROES][SUPERVILLANOS]){
	
int i,j;
int ganador, victorias, mejor=0;
for(i=0;i<dim;i++){
	victorias=0;
		for(j=0;j<dim;j++){
			if(Clasific[i][j]==3){
				victorias++;
			}
			if(victorias>=mejor){
				ganador=i;
			}			
		}
	}
return ganador;
}
int Ganadores(int Clasific[SUPERHEROES][SUPERVILLANOS]){
	
int i,j;
int derrotas=0, victorias=0;
for(i=0;i<dim;i++){
		for(j=0;j<dim;j++){
			if(Clasific[i][j]==3){
				victorias++;
			}else if(Clasific[i][j]==1){
				derrotas++;
			}			
		}	
	}
	
	if(victorias==derrotas){
		return EMPATE;
	}else if(victorias>=derrotas){
		return BUENOS;
	}else if(victorias<=derrotas){
		return MALOS;
	}

	
}

void main()
{
int Clasific[SUPERHEROES][SUPERVILLANOS],ganador,ganadores; /*Tabla resultados*/
	Inicia (Clasific); /*Coloca todas las posiciones a NO_COMBATE*/
	Carga (Clasific); /*Carga la clasificación desde disco*/
	printf("Bienvenido al programa de gestión de superhéroes.\n");
	printf("El superhéroe ganador es el número %d\n", ganador=Ganador(Clasific));
		switch (ganadores=Ganadores(Clasific)){
			case BUENOS: printf("Los ganadores son los buenos.\n");
			break;
 			case MALOS: printf("Los ganadores son los malos.\n");
			break;
 			case EMPATE: printf("De momento, van empatados.");
			break;
 			default: printf ("Error en el cómputo de batallas ganadas");
}

return;
} 
