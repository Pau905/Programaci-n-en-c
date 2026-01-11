#include<stdio.h>
#include<conio.h>

int Factorial(int x){
	int res=1, i;
	for(i=1;i<=x;i++){
	res=res*i;
}
return res;
}

int main(){
	int n, factorial;
	printf("Escribe un numero n: ");
	scanf("%d", &n);
	factorial= Factorial(n);
	
	printf("%d", factorial);
	
	getch();
	return 0;
	
}
