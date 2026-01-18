#include <stdio.h>


int contarA(char frase[]) {
    int contador = 0;
    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == 'a' || frase[i] == 'A') {
            contador++;
        }
    }
    return contador;
}

int main() {
    char frase[200];

    printf("Introduce una frase: ");
    fgets(frase, sizeof(frase), stdin);

    int totalA = contarA(frase);

    printf("La frase tiene %d letras 'a'.\n", totalA);

    return 0;
}
