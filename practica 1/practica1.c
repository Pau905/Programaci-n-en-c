#include <stdio.h>
#include <conio.h>
#define PI 3.14159265
int main(){
	float radio, longitud, area;
		printf("Introduce el radio:");
		scanf("%f", &radio);
		longitud = 2*PI*radio;
		area = PI*radio*radio;
	printf("La longitud de una circunferencia ""de radio %f es %f y El area del circulito es %f.\n", radio, longitud, area);
	getch();

	return 0;
}
