#include <stdio.h>
int lee_numero(){
	int n;
	do{
		printf("Dime un numero positivo: ");
		scanf("%d", &n);
		if (n<=0){
			printf("El numero no es positivo\n");
		}
	}while(n<=0);
	return n;
	
}
void escribe_fibonaci(int x){
	int i, anterior1=1, anterior2=0, nuevo=1;
	printf("0 ");
for(i=0;i<=x;i++){
	printf("%d ", nuevo);
	nuevo = anterior2 + anterior1;
        anterior2 = anterior1;
        anterior1 = nuevo;
	
}
}

int main()
{ int n;
n = lee_numero();
escribe_fibonaci(n);
return 0;
}
