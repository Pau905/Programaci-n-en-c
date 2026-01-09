#include <stdio.h>

int main(){
	int num1;
	float num2, resultado;
FILE *F, *S;

F = fopen("datos.txt", "r");

if (F==NULL){
printf("El archivo no se ha podido abrir");
}else{

fscanf(F,"%d", &num1);
fscanf(F,"%f", &num2);

resultado=num1*num2;

fclose(F);

S=fopen("resultado.txt", "w");

fprintf(S,"El resultado es %f", resultado);
printf("El resultado se ha guardado en el fichero resultado.txt");
fclose(S);

return 0; }
	
}
