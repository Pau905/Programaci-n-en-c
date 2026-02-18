#include <stdio.h>
#include <conio.h> 
int Perfecto(int numero) {
	int i, suma=0;
       
    for (i = 1; i < numero; i++) {
    	if (numero % i ==0){
        suma=suma+i;	
		}
    }
    if (suma==numero){
    	return 1; 
	}else{
		return 0; 
	}
}

int main() {
    int n, perfecto;

    printf("Introduzca un numero: ");
    scanf("%d", &n);
    perfecto=Perfecto(n);
    
	if (perfecto==1){
		printf("El numero %d es perfecto", n);
	}else{
		printf("El numero %d no es perfecto", n);
	}
	getch();
    return 0;
}
