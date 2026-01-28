#include<stdio.h>
float area(float r){
	return 3.141592654*r*r;
}

float leerRealPositivo (){
	float n;
	do {
 		printf("Escribe un número real: ");
 		scanf("%f", &n);
 			if (n < 0)
 			printf("El número ha de ser positivo");
 	} while (n < 0);
 return n;

}

int main() {
	float r = leerRealPositivo();
	float a = area(r);
printf("El area de un circulo de radio %f es %f", r, a);
getch();
return 0;
}
