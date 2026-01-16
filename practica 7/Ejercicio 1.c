#include<stdio.h>
#include<conio.h>

int main(){
	int i, numero[10], suma=0, mayores=0, menores=0;
	float media;
for (i=0;i<10;i++){
		printf("Introduzca los numeros: ");
		scanf("%d", &numero[i]);
	suma = suma+numero[i];
}
media = suma/10.0;

	for(i=0;i<10;i++){
		if (numero[i]>=media){
			mayores++;
		}else if (numero[i]<=media){
			menores++;}
	}
	
	printf("La media es %.2f\n Hay %d numeros por encima y %d numeros por debajo por debajo.", media, mayores, menores);

getch();
return 0;

}
