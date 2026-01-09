#include <stdio.h>

int main(){
	float num1, num2, num3, media;
FILE *F, *P, *S;

//archivo 1
F = fopen("nota_alumno1.txt", "r");
if (F==NULL){
printf("El archivo no se ha podido abrir.");
}else{
fscanf(F,"%f", &num1);
fclose(F);}

//archivo 2
P = fopen("nota_alumno2.txt", "r");
if (P==NULL){
printf("\nEl archivo no se ha podido abrir.");
}else{
fscanf(P,"%f", &num2);
fclose(P);}

//archivo 3
S = fopen("nota_alumno3.txt", "r");
if (S==NULL){
printf("\nEl archivo no se ha podido abrir.");
}else{
fscanf(S,"%f", &num3);
fclose(S);}

media=(num1+num2+num3)/3;

printf("\nLas tres notas son: %f, %f, %f y la nota media de los tres alumnos es %f", num1, num2, num3, media);

return 0; 
	
}
