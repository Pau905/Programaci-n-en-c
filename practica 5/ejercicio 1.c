#include<stdio.h>
#include<conio.h>
int main(){
	int aprovados=0, n=0;
	float nota, min=10, max=0, suma=0, media;
	FILE *F;
	
	F=fopen("nota.txt","r");
	if(F==NULL){printf("Error al abrir el archivo");
	return 1;
	}
	while(fscanf(F, "%f", &nota) != EOF){
		n++;
	suma += nota; 
	if(nota<min){
		min=nota;
	}else if (nota > max){
		max=nota;
	}
	if (nota>=5){
		aprovados++; 
	}
	
}
fclose(F);
media= suma/n;
printf("--Resultado--\n\tNota minima: %.2f\n\tNota maxima: %.2f\n\tMedia: %.2f\n\tAprovados: %d", min, max, media, aprovados);
getch ();
return 0;
}
