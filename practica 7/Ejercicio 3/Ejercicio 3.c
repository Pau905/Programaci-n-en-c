#include <stdio.h>

int es_capicua(int vector[10]) {
	int i;
    for (i = 0; i < 5; i++) { 
        if (vector[i] != vector[9 - i]) {
            return 0; 
        }
    }
    return 1; 
}

void imprimir_resultado(int x) {
    if (x == 1)
        printf("El vector si es capicua.\n");
    else
        printf("El vector no es capicua.\n");
}

int main() {
    int vector[10],i;
    FILE *f = fopen("vector.txt", "r");

    if (f == NULL) {
        printf("Error: no se pudo abrir vector.txt\n");
        return 1;
    }

    for (i = 0; i < 10; i++) {
        fscanf(f, "%d", &vector[i]);
    }
    fclose(f);

    int resultado = es_capicua(vector);
    imprimir_resultado(resultado);

    return 0;
}






