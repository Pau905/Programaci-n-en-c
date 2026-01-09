#include <stdio.h>

int main(){
int num, unidades, decenas, centenas;

FILE *F, *R;

F = fopen("datos3.txt", "r");
	if (F==NULL){
	printf("El archivo no se ha podido abrir.");
	}else{
fscanf(F,"%d", &num);


centenas=num/100;
decenas=(num%100)/10;
unidades=num%10;

fclose(F);

//RESULTADO
R=fopen("resultado", "w");
fprintf(R,"Numero: %d", num);
fprintf(R,"\nResultado: \n");

//centenas
if (centenas % 2 == 0){
fprintf(R,"\n Centenas: %d es par", centenas);
}else{
fprintf(R,"\n Centenas: %d impar", centenas);
}


//decenas

if (decenas % 2 == 0){
fprintf(R,"\n Decenas: %d es par", decenas);
}else{
fprintf(R,"\n Decenas: %d impar", decenas);
}

//unidades
if (unidades % 2 == 0){
fprintf(R,"\n Unidad: %d es par", unidades);
}else{
fprintf(R,"\n Unidad: %d impar", unidades);
}


fclose(R);
return 0; }

}
