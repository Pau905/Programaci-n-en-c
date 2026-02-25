#include<stdio.h>
#include<string.h>
#define max 500
void leer_frase(char frase[]){
	printf("Dime algo: ");
	fgets(frase, max, stdin);

}

int total(char frase[]){
	int i, total=0;
	int longitud=strlen(frase);

   if (frase[0] != ' ') {
        printf("%c", frase[0]);
        total++;
    }

	for (i=0;i<longitud; i++){
		
	if(frase[i]==' ' && frase[i+1] != '\0' && frase[i+1] != ' '){
		printf("%c", frase[i+1]);
		total++;
	}
	}
	return total;
}

int main(){
	char frase[max];
	int palabras;
	leer_frase(frase);
	palabras=total(frase);
	printf(" tine %d letras", palabras);
	
	return 0;
}
