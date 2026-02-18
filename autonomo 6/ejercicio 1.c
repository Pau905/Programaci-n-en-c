#include<stdio.h>
int factorial(int x ) {
	int resultado=1, i;
	for (i=x;i>1;i--){
		resultado= resultado * i;
	}
	return resultado;
}

int main(){
int n, k, nfactorial, kfactorial, nkfactorial, objetivo;
printf("Escribe n: ");
scanf("%d", &n);	
printf("Escribe k: ");
scanf("%d", &k);
	
	nfactorial= factorial(n);
	kfactorial= factorial(k);
	nkfactorial= factorial(n-k);
	
	objetivo=nfactorial/(nkfactorial*kfactorial);
	
	printf("%d", objetivo);
	
	 
	return 0;
	
}
