#include <stdio.h>
#include <conio.h>

int main(){
	int valores, num, suma=0, producto=1, i;
		printf("cuantos valores se van a introducir: ");
			scanf("%d", &valores);
	
	for(i=1;i<=valores;i++){
	
		printf("Dime un numero real: ");
			scanf("%d", &num);
		suma=suma+num;
		producto=producto*num;
	}
		
	printf("Suma: %d\nProducto: %d", suma, producto);
	
getch();
return 0;
}
