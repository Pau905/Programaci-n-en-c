#include <stdio.h>
#include <conio.h>

int main(){
	int filas, i, j;
		printf("Dime un numero de filas: ");
			scanf("%d", &filas);
	
			
for(i=1;i<=filas;i++){

	for(j=1;j<=i;j++){
		printf("0");	
	}
	printf("\n");
}
getch();
return 0;}
