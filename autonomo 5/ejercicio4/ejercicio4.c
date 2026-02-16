#include <stdio.h>
#include <conio.h>

int main(){
	int iva1, iva2, iva3, num1, num2, num3, carnet;
	float precio1, precio2, precio3, total;
	FILE *F, *G;
	
	do{
	printf("Pulse 1 si tiene carnet joven y 0 si no tiene: ");
	scanf("%d", &carnet);
	if(carnet!=0 && carnet!=1){printf("El numero introducido no es correcto.\n");
	}
}while(carnet!=0 && carnet!=1);
	
	F=fopen("datos.txt", "r");
	G=fopen("iva.txt", "r");
	fscanf(F,"%f", &precio1);
	fscanf(F,"%f", &precio2);
	fscanf(F,"%f", &precio3);
	fscanf(G,"%d", &iva1);
	fscanf(G,"%d", &iva2);
	fscanf(G,"%d", &iva3);
		printf("Cuantos productos 1 quieres: ");
		scanf("%d", &num1);
		printf("Cuantos productos 2 quieres: ");
		scanf("%d", &num2);
		printf("Cuantos productos 3 quieres: ");
		scanf("%d", &num3);
		
    precio1 = precio1 * num1 * (1 + iva1 / 100.0);
    precio2 = precio2 * num2 * (1 + iva2 / 100.0);
    precio3 = precio3 * num3 * (1 + iva3 / 100.0);
		
			total=precio1+precio2+precio3;
	if(carnet==1){
		total=total/2;
	}else{
		total=total*3;
	}
	
		printf("El pago por los productos sera de %.2f ", total);
	  fclose(F);
	    fclose(G);
	
getch();
return 0;}
