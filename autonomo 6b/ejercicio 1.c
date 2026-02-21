#include<stdio.h>
int pedirnumero(){
	int n;
	FILE *F;
	
	F=fopen("datos.txt", "r");
	if(F == NULL) {
        printf("Error al abrir el fichero datos.txt\n");
        return 1;
    }
	fscanf(F, "%d", &n);
	fclose(F);
	return n;
}
int oblongo(int num){
	int i;
	
	for(i=1;i<num;i++){
		if(i*(i+1)==num){
		return 1;		
	}
}
return 0;
}
void almacenar(int num, int res){
	char nombre[100];
	FILE *F;
	printf("Dime el nombre del fichero ");
		scanf("%s", &nombre);	
	if(res==1){
		F=fopen(nombre, "w");
		fprintf(F, "El numero %d es oblongo: ", num);
		fclose(F);
	}else{
		F=fopen(nombre, "w");
		fprintf(F, "El numero %d no es oblongo: ");
		fclose(F);
}
}
int main(){
int numero, resultado;
numero=pedirnumero();
resultado=oblongo(numero);
almacenar(numero, resultado);
}
