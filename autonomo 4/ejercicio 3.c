#include <stdio.h>
#include <conio.h>
int main(){
	float x, fx;
		printf("Dime el valor de x: ");
		scanf("%f", &x);
		
	if(x==2){	 
	printf("El valor de la funcion f(2) de: -5");
	} else if (x>=1){
		fx = 1 + (1/(x-2)) -3*x;
		printf ("El valor de la funcion f(%.2f) de: %.2f", x, fx);		
	}else{
		fx=x*x-5*x+1;
		printf ("El valor de la funcion f(%.2f) de: %.2f", x, fx);
	}
getch();
return 0;
}
