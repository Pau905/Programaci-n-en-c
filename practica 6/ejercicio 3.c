#include<stdio.h>
#include<conio.h>

int Primo(int x){
	int resultado=0, i;
if(x < 2){
		return 0;
}

	for(i=1;i<=x;i++){
		if (x%i==0){
			resultado++;
		}
	}
	if (resultado==2){
		return 1;
	}else if(resultado>=2){
		return 0;
}
}

int main(){
	int num, primo;
	printf("Dime un numero: ");
	scanf("%d", &num);
	
	if(num==0){
		printf("El numero es 0");
		return 0;
	}
	
	
	primo=Primo(num);
	
	if (primo==1){
		printf("El numero es primo");
	}else{
		printf("El numero no es primo");
	}
	
	
	getch();
	return 0;
	
}
