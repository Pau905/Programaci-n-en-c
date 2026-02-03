#include <stdio.h>
#include <math.h>
int main (){
	float base, altura, area, perimetro;
	printf("Dime la base: ");
	scanf("%f",&base);
	printf("Dime la altura: ");
	scanf("%f",&altura);
	
	area=(base*altura)/2;
	perimetro=base+altura+sqrt(base*base+altura*altura);
	
	printf("El area es %f y el perimetro es %f", area, perimetro);
 return 0;
}
