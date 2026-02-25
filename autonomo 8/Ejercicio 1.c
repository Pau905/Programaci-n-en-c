#include<stdio.h>
#include<string.h>
#define max 500
void leer_frase(char frase[]){
	printf("Dime algo: ");
	fgets(frase, max, stdin);

}

void imprimir(char frase[]){
	int i;
	int longitud=strlen(frase);
	
	for (i=0;i<longitud; i++){
		
		printf("%c\n", frase[i]);
	}
}

int main(){
	char frase[max];
	leer_frase(frase);
	imprimir(frase);
	return 0;
}
