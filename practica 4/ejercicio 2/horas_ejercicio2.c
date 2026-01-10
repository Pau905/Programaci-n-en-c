#include <stdio.h>

int main(){
	int horas, minutos, segundos;

	FILE *F;
	
	F=fopen("horas.txt", "r");
	
		if (F == NULL) {
    printf("Error al abrir el archivo.\n");
    return 1;
}
	
	fscanf(F,"%d", &horas);
	fscanf(F,"%d", &minutos);
	fscanf(F,"%d", &segundos);
	
	fclose(F);
	
	
	if (horas<=24 && minutos<=60 && segundos<=60){
		printf("%d:%d:%d", horas, minutos, segundos);
		}else{
			printf("NO ES UNA HORA VALIDA");
		}
	
return 0;	
}
