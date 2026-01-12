#include <stdio.h>
int lee_numero(){
	int n;
	do{
		printf("Dime un numero positivo: ");
		scanf("%d", &n);
		if (n<=0){
			printf("El numero no es positivo\n");
		}
	}while(n<=0);
	return n;
	
}
void escribe_impares(int x){
	int cantidad=0;
	printf("Los primeros 10 numeros impares mayores que %d son: ", x);
	while(cantidad<10){
		x++;		
		if ((x % 2)!= 0){
			printf("%d ", x);
			cantidad++;
		}
	}
}

int main()
{ int n;
n = lee_numero();
escribe_impares(n);
return 0;
}
