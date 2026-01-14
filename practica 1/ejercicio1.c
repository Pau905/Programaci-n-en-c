#include <stdio.h>

int main(){
	float base, altura, area, perimetro;
	
	printf("Intraduce la longitud de la base: ");
	scanf("%f", &base); 
	printf("Intraduce la longitud de la altura: ");
	scanf("%f", &altura);
	
	area=base*altura;
	perimetro=base*2+altura*2;
	printf("Dada los siguientes valores de la base %f y la altura %f, el area sera %f y el perimetro sera %f .\n", base, altura, area, perimetro);
	
	
	getch();
	return 0;
	
}
