#include <stdio.h>

int main() {
    int total_segundos;
    int horas, minutos, segundos_restantes;

    printf("Introduce el número total de segundos: ");
    scanf("%d", &total_segundos);

    // Calcul
    horas = total_segundos / 3600;              // 1 hora = 3600 segundos
    minutos = (total_segundos % 3600) / 60;     // resto de segundos convertido en minutos
    segundos_restantes = total_segundos % 60;   // segundos sobrantes

    printf("%d segundos equivalen a %d horas, %d minutos y %d segundos.\n",
           total_segundos, horas, minutos, segundos_restantes);

    return 0;
}

