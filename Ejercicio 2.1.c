#include <stdio.h>
#include <conio.h>
int main(){
	int num, centenas, decenas, unidades;
	printf("Dime un numero entero de tres cifras: ");
	scanf("%d", &num);
	
	centenas =num/100;
	decenas= (num/10)%10;
	unidades= num%10;
	
	printf("Las centenas son %d, las decenas son %d i la unida es %d.", centenas, decenas, unidades );
	
	getch();
	
	return 0;	
}
