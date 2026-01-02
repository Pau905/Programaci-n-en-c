#include <stdio.h>
#include <conio.h>
int main(){
	float mates, fisica, informatica, nota_media;
	printf("La nota de mates: ");
	scanf("%f", &mates);
	printf("La nota de fisica: ");
	scanf("%f", &fisica);
	printf("La nota de informatica: ");
	scanf("%f", &informatica);

nota_media=(mates+fisica+informatica)/3;

	printf("La media entre las notas de mates(%f), fisica(%f) y informatica(%f), es de %f.", mates, fisica, informatica, nota_media );
	
	getch();
	
	return 0;	
}
