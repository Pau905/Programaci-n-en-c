#include <stdio.h>

int main(){
int num1;
float num2, resultado;
FILE *F, *S;

F = fopen("datos.txt", "r");

fscanf(F,"%d", &num1);
fscanf(F,"%f", &num2);

resultado=num1*num2;

fclose(F);

S=fopen("resultado2.txt", "w");

fprintf(S,"El resultado es %f", resultado);

fclose(S);

return 0; }


