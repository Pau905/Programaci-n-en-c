#include <stdio.h>
#include <conio.h> 
int esPrimo(int numero) {
	int i;
    if (numero <= 1) {
        return 0; 
    }
    
  
    for (i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0; 
        }
    }
    
    return 1; // Si no se encontraron divisores, es primo
}
// --- Función 2: Mostrar los primeros N números primos ---
void mostrarNPrimos(int n) {
    if (n <= 0) {
        printf("El número de primos a mostrar debe ser positivo.\n");
        return;
    }

    int contador_primos = 0; 
    int numero_actual = 2;   // Empezamos la verificación desde el primer primo (2)

    printf("Los primeros %d números primos son:\n", n);

    while (contador_primos < n) {
        if (esPrimo(numero_actual)) {
            printf("%d", numero_actual);
            contador_primos++;
            if (contador_primos < n) {
                printf(", ");
            }
        }
        numero_actual++;
    }
    
    printf("\n");
}


int main() {
    int n;

    printf("Introduzca la cantidad (N) de números primos que desea ver: ");
    scanf("%d", &n);
    mostrarNPrimos(n);

    return 0;
}
