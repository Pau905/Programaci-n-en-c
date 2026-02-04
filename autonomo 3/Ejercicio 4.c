#include <stdio.h>

int main(){
	int num1, num2, resultadop, resultadoi;
		FILE *F, *S, *P;

		F = fopen("datos.txt", "r");
			fscanf(F, "%d", &num1);
			fscanf(F, "%d", &num2);
		fclose(F);

		if(num1 % 2 == 0 && num2 % 2 == 0){
			resultadop = num1 * num2;
				S = fopen("pares.txt", "w");
					fprintf(S,"Ambos números son pares (%d y %d).\nEl resultado de multiplicarlos es: %d\n", num1, num2, resultadop);
        		fclose(S);
        printf("Resultado guardado en 'pares.txt'.\n");
		}else{
			resultadoi = num1 + num2;
				P = fopen("impares.txt", "w");
					fprintf(P, "Al menos uno de los números es impar (%d y %d).\nEl resultado de sumarlos es: %d\n", num1, num2, resultadoi);
				fclose(P);
		printf("Resultado guardado en 'impares.txt'.\n");
		}
		
return 0;	
 	
}


