#include <stdio.h>

int main() {
    int resultado, numero, edad;

    printf("Piensa un numero del 1 al 9.\n");
    printf("\nMultiplica tu edad por 10 y restale el numero que has pensado multiplicado por 9.\n");
    printf("\nDame el resultado: ");
    scanf("%d", &resultado);

    numero = resultado % 10;
    edad = (resultado / 10) + numero; 

   
    printf("\nTu edad es %d y el numero que has pensado es el %d.\n", edad, numero);

    return 0;
}

