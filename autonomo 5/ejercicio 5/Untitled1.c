#include<stdio.h>
#include<conio.h>

int main(){
	float altura, peso, imc;
	char nombre[50], salut, compania[50];
	FILE *F;
	
	printf("Nombre completo: ");
	gets(nombre);
	printf("Altura en m: ");
	scanf("%f", &altura);
	printf("Peso en kg: ");
	scanf("%f", &peso);
	
	do{
	printf("Compania de salut (S/N): ");
	scanf(" %c", &salut);
	if(salut!='S' && salut!='s' && salut!='N' && salut!='n' ){
		printf("El valor introducido no es correcto.\n");
	}
}while(salut!='S' && salut!='s' && salut!='N' && salut!='n' );

if(salut=='S' || salut=='s'){
		printf("Nombre de la compania de salut: ");
	gets(compania);
}

imc=peso/(altura*altura);

F=fopen("res.txt", "w");
if(F==NULL){printf("Error al abrir el archivo.\n");
return 1;
}

if(salut=='S' || salut=='s'){
		fprintf(F,"%s SI tiene seguro privado con la compania %s y su IMC es %.2f", nombre, compania, imc);

}else{
	fprintf(F,"%s NO tiene seguro privado y su IMC es %.2f", nombre, imc);
	
}
fclose(F);
printf("Se ha realizado el fichero correctamente.");

getch();
return 0;

}
