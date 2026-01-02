#include <stdio.h>
#include <conio.h>

int main(){
	int nota1, nota2, nota3, media;
	FILE *F,*S;
	F=fopen("notas.txt", "r");
	fscanf(F, "%d", &nota1);
	fscanf(F, "%d", &nota2);
	fscanf(F, "%d", &nota3);
	fclose(F);
	
	S=fopen("notas.txt", "w");
	media=(nota1+nota2+nota3)/3;
	fprintf(S, "Alumno1: %d", nota1);
	fprintf(S, "\nAlumno2: %d", nota2);
	fprintf(S, "\nAlumno3: %d", nota3);
	fprintf(S,"\nLa nota media de los alumnos es: %d", media);
	
 	fclose(S);
 	
return 0;
getch;
}
