#include <stdio.h>

int main() {
    int dias, horas, minutos, segundos;
    long total_segundos;

    printf("Introduce los días, las horas, los minutos y los segundos:\n");
    scanf("%d %d %d %d", &dias, &horas, &minutos, &segundos);

   
    total_segundos = (dias * 24 * 3600) + (horas * 3600) + (minutos * 60) + segundos;

    printf("%d dias, %d horas, %d minutos y %d segundos equivalen a %ld segundos en total.\n",
           dias, horas, minutos, segundos, total_segundos);

    return 0;
}
