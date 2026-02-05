#include <stdio.h>
#include <conio.h>
int main(){
	int num, centenas, decenas , unidades;
	FILE *F,*G;
	
	F=fopen("datos.txt","r");
	if (F==NULL){
		printf ("No se hapodido abrir el archivivo.\n");
		return -1;
	}
	
	fscanf(F, "%d", &num);
	fclose(F);
	
	centenas=num/100;
	decenas=(num%100)/10;
	unidades=(num%100)%10;
	
	G=fopen("res.txt","w");
	fprintf(G, "---Resultado---\n\t");
	if(centenas % 2== 0){
		fprintf(G,"Las centenas son un numero par: %d\n\t", centenas);
	}else{	fprintf(G,"Las centenas son un numero impar: %d\n\t", centenas);
	}
	
	if(decenas % 2== 0){
		fprintf(G,"Las decenas son un numero par: %d\n\t", decenas);
	}else{	fprintf(G,"Las decenas son un numero impar: %d\n\t", decenas);
	}

	if(centenas % 2== 0){
		fprintf(G,"Las unidades son un numero par: %d", unidades);
	}else{	fprintf(G,"Las unidades son un numero impar: %d", unidades);
	}
	fclose(G);
	
getch();
return 0;
}
