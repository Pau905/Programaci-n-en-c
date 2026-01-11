#include<stdio.h>
#include<conio.h>
int main(){
	
	float inicial, final, incremento, i, ptas;

	printf("Dime el valor inicial: ");
	scanf("%f", &inicial);
	printf("Dime el valor final: ");
	scanf("%f", &final);
	printf("Dime el incremento: ");
	scanf("%f", &incremento);

printf("Euros\tPesetas\n");

	for(i=inicial; i<=final; i+=incremento){
		ptas= 166.386 * i;
		printf("%.2f\t%d\n", i, (int)ptas);
	}	

getch ();
return 0;
}
