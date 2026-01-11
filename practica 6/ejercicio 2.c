#include<stdio.h>
#include<conio.h>
#define PI 3.1415

float LeeRadio(){
	float radio;
	printf("Dime el radio: ");
	scanf("%f", &radio);
return radio;
}



float CalculaLongitud(float x){
	float longitud;
	longitud =  2*PI*x;

return longitud;
}




float CalculaArea(float x){
	float res;
	res= PI*x*x;

return res;
}

void MuestraResultados(float x, float y, float z){
 printf("%.3f\n%.3f\n%.3f", x, y, z);
}


int main()
{ float radio, longitud, area;

 radio = LeeRadio();
 
 longitud = CalculaLongitud(radio);
 
 area = CalculaArea(radio);
 
 MuestraResultados(radio, longitud, area);
 
 getch();
 return 0;
} 
