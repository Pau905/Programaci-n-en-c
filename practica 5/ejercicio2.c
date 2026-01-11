#include<stdio.h>
#include<conio.h>
int main(){
	int i, n, resultado=1;
	printf("Dime un numero n: ");
	scanf("%d", &n);

	for(i=1; i<=n; i++){
	resultado= i*resultado;		
	}
printf("Resultado: %d", resultado);

getch ();
return 0;
}
