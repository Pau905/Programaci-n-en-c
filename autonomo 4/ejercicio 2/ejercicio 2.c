#include <stdio.h>

int main(){
	int num1, num2, resultado;
	char nombre[50];
	
	FILE *F,*P, *I;
	
	F=fopen("datos.txt","r");
	fscanf(F,"%d", &num1);
	fscanf(F,"%d", &num2);
	fclose(F);
	
	if(num1 != (int)num1 || num2 != (int)num2)
	{
	printf("Alguno de los numeros no es entero");
	}else{
	
	if(num1 % 2 == 0 || num2 % 2 == 0){
		resultado=num1*num2;
		printf("Dime el nombre del fichero al que quieres guardarlo: ");
		scanf("%s", nombre);
		
		P=fopen(nombre,"w");
		fprintf(P,"El resultado es %d", resultado);
		fclose(P);
	}else{
		resultado=num1+num2;
		printf("Dime el nombre del fichero al que quieres guardarlo: ");
		scanf("%s", nombre);
		
		I=fopen(nombre,"w");
		fprintf(I,"El resultado es %d", resultado);
		fclose(I);
	}}
	return 0;
}
