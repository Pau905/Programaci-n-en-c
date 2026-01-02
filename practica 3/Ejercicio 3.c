#include <stdio.h>
#include <conio.h>

int main(){
	int contador;
	FILE *F,*S;
	F=fopen("contador.txt", "r");
	fscanf(F, "%d", &contador);
	fclose(F);
	
	S=fopen("contador.txt", "w");
	contador=contador+1;
	fprintf(S,"%d", contador);
	
 	fclose(S);
 	
return 0;
getch;
}
