#include <stdio.h>

int main() {
    int dividendo, divisor, cociente, resto;

    printf("Introduce el dividendo: ");
    scanf("%d", &dividendo);

    printf("Introduce el divisor: ");
    scanf("%d", &divisor);

    if (divisor != 0) {
        cociente = dividendo / divisor;   // División entera
        resto = dividendo % divisor;      // Resto de la división

        printf("El cociente es %d y el resto es %d\n", cociente, resto);
    } else {
        printf("Error: no se puede dividir entre cero.\n");
    }

    return 0;
}
