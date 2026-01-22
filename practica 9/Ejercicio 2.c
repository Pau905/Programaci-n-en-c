#include<stdio.h>
#include<conio.h>
void leer(int matriz[5][7]){
	int i,j;
		printf("Ingrese los valores de la matriz: ");

		for(i=0;i<5;i++){
		for(j=0;j<7;j++){
			do{
				scanf("%d", &matriz[i][j]);
				if (matriz[i][j] < 0 || matriz[i][j] > 100) {
                    printf("Valor invalido. Debe estar entre 0 y 100.\n");
                }
			}while(matriz[i][j] < 0 || matriz[i][j] > 100);
		}
	}
	
}

void magnitud(int matriz[5][7]){
	int i,j,min,max;
	min=101;
	max=-1;
		for(i=0;i<5;i++){
		for(j=0;j<7;j++){
			if(matriz[i][j]>max){
				max=matriz[i][j];
			}else if(matriz[i][j]<min){
				min=matriz[i][j];
			}
			
		}

}
printf("El numero mas grande es %d y es mas pequeno es %d", max, min);
}

int main(){
	int matriz[5][7];
	leer(matriz);
	magnitud(matriz);		
	getch();
	return 0;
}
