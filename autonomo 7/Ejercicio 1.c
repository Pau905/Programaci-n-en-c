#include<stdio.h>
#define personas 200

int leer(int sexos[],float pesos[]){
	int i;
	FILE *f;
	f=fopen("pesos.txt","r");
	if(f==NULL){
		printf("Algo anda mal al abrir el archivo,\n");
		return -1;
	}
	for(i=0;i<personas;i++){
		if (fscanf(f, "%d %f", &sexos[i], &pesos[i]) != 2){
			fclose(f);
			return -1;//ERROR
		}
	}

fclose(f);
return 0;

}

float media(int sexo[],float peso[],int tipo){
	int i, contador=0;
	float suma=0.0f, media;
	for(i=0;i<personas;i++){
		
		if (sexo[i]==tipo){
			suma+=peso[i];
			contador++;
		}
	}
	media= suma/contador;
	return media;
}


int main(){
	int tipo, sexos[personas];
	float pesos[personas];
	
	   if (leer(sexos, pesos) == -1) {
        printf("Error al abrir o leer el fichero.\n");
        return 0;
    }
	
	printf("Dime que tipo de sexo, hombre(0) mujer(1): ");
	scanf("%d", &tipo);
	
	float resultado = media(sexos, pesos, tipo);

    if (tipo == 0)
        printf("El peso medio de los hombres es: %.2f\n", resultado);
    else
        printf("El peso medio de las mujeres es: %.2f\n", resultado);

	
	return 0;
}
