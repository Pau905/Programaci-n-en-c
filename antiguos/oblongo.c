#include<stdio.h>

int leer(){
	int n;
	printf("Dime un numero: ");
	scanf("%d", &n);
	return n;
	}
int oblongo(int numero){
	int i;
	
	for (i=1;i<numero;i++){
		if(i*(i-1)==numero){
			return 1;
		}
	}
	return 0;
}
int main(){
	int numero, es;
	numero=leer();
	es=oblongo(numero);
	if (es==1){
		printf("El numero es oblongo.");
	}else{
		printf("El numero no es oblongo");
	}
}
