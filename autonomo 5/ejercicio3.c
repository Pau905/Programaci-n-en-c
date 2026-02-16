#include <stdio.h>
#include <conio.h>

int main(){
	int columnas, filas, i, j;
		printf("Dime un numero de filas: ");
			scanf("%d", &filas);
		printf("Dime un numero de columnas: ");
			scanf("%d", &columnas);	
			
for(i=1;i<=filas;i++){

	for(j=1;j<=columnas;j++){
		printf("H");	
	}
	printf("\n");
}
getch();
return 0;}
