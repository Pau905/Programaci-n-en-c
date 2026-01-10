#include <stdio.h>
int main() {
float notat, notap, media;
FILE *F, *R;

printf("Dime la nota de teoria: ");
scanf("%f", &notat);
printf("Dime la nota de practicas: ");
scanf("%f", &notap);

media= (notat+notap)/2;

if(media >=5 && notat >=4 || notap >=4){
	F=fopen("aprovado.txt", "w");
		fprintf(F,"El alumno ha sacado en toria %.2f y en practicas %.2f\nPor lo tanto su media sale aprovada con un %.2f", notat, notap, media);	
	fclose(F);

}else{
	R=fopen("suspendido.txt", "w");
	fprintf(R,"El alumno ha sacado en toria %.2f y en practicas %.2f\n Sacando una media de %.2f, por lo tanto ha suspendido", notat, notap, media);
	fclose(R);
}

return 0;

}
