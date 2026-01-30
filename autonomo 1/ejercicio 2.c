#include <stdio.h>
#include <math.h> 

int main(){
	float x1, y1, x2, y2, distancia;	
printf("Dame la cordenada x del primer punto: ");
scanf("%f", &x1);
printf("\nDame las cordenada y del primer punto: ");
scanf("%f", &y1);
printf("\nDame la cordenada x del segundo punto: ");
scanf("%f", &x2);
printf("\nDame las cordenada y del segundo punto: ");
scanf("%f", &y2);

distancia=sqrt((x2-x1) * (x2-x1) + (y2-y1) * (y2-y1));

printf("\nEl modulo de la distancia geometrica entre dos puntos es: %f ",distancia);

return 0;

}
