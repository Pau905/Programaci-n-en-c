#include <stdio.h>
#include <string.h>

#define PALABRA "pala"   
#define VIDAS_INICIALES 5

int main() {
    char oculta[50];
    char letra;
    int vidas = VIDAS_INICIALES;
    int longitud = strlen(PALABRA);
    int aciertos = 0;
	int i;
    
    for (i = 0; i < longitud; i++) {
        oculta[i] = '*';
    }
    oculta[longitud] = '\0';

   
    while (vidas > 0 && aciertos < longitud) {
        printf("Palabra: %s Vidas: %d\n", oculta, vidas);

        printf("Letra: ");
        scanf(" %c", &letra);

        int encontrado = 0;

        // Buscar coincidencias
        for (i = 0; i < longitud; i++) {
            if (PALABRA[i] == letra && oculta[i] == '*') {
                oculta[i] = letra;
                aciertos++;
                encontrado = 1;
            }
        }

        if (encontrado==0) {
            vidas--;
        }
    }

    if (aciertos == longitud) {
        printf("Palabra: %s Vidas: %d\n", oculta, vidas);
        printf("Acertaste y te sobraron %d vidas.\n", vidas);
    } else {
        printf("Perdiste. La palabra era: %s\n", PALABRA);
    }

    return 0;
}

