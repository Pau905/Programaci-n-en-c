#include<stdio.h>
#include<conio.h>

int main(){
	int aprovado=1;
	float altura, peso, imc;
	
	FILE *F, *G;
	
	F=fopen("candidato.txt","r");
	
	fscanf(F, "%f", &altura);
	fscanf(F, "%f", &peso);
	altura=altura/100.0;
	fclose(F);
	
	imc=peso/(altura*altura);
	
	if(altura<1.75){
		aprovado=0;
	}
	
	if(imc<19.5 || imc >22.5){
		aprovado=0;
	}
	
	if(aprovado==1){
		printf("El aspirante ha sido admitido en el grupo.");
	}else{
		printf("El aspirante no ha sido admitido\n(altura=%.2f, imc=%.2f).", altura, imc);
	}
	getch();
	return 0;
}
