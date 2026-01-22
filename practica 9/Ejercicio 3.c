#include<stdio.h>
void leer(int matriz[2][4]){
	int i,j;
		printf("Ingrese los valores de la matriz: ");

		for(i=0;i<2;i++){
		for(j=0;j<4;j++){
			do{
				scanf("%d", &matriz[i][j]);
				if (matriz[i][j] < 0 || matriz[i][j] > 100) {
                    printf("Valor invalido. Debe estar entre 0 y 100.\n");
                }
			}while(matriz[i][j] < 0 || matriz[i][j] > 100);
		}
	}
	
}

void lugar(int matriz[2][4]){
	int i,j,min,max;
	min=101;
	max=-1;
		for(i=0;i<2;i++){
		for(j=0;j<4;j++){
			if(matriz[i][j]>max){
				max=matriz[i][j];
			}else if(matriz[i][j]<min){
				min=matriz[i][j];
			}
			
		}

	}
		for(i=0;i<2;i++){
		for(j=0;j<4;j++){
			if(max==matriz[i][j]){
				printf("El numero maximo se encuentra en la columna: %d\n", j+1);
			}else if(min==matriz[i][j]){
				printf("El numero minimo se encuentra en la fila: %d\n", i+1);
			}
			
		}

}
}
void imprimir(int matriz[2][4]){
		int i,j;
	printf("---LA MATRIZ---");

		for(i=0;i<2;i++){
			printf("\n");
		for(j=0;j<4;j++){
			printf("%d\t", matriz[i][j]);
	}
}}
int main(){
	int matriz[2][4];
	leer(matriz);
	lugar(matriz);
	imprimir(matriz);
	return 0;
}
