#include <stdio.h>

int main() {
    char frase[200];
    int contador = 0;

    printf("Introduce una frase: ");
    fgets(frase, sizeof(frase), stdin); 

    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == 'a' || frase[i] == 'A') {
            contador++;
        }
    }

    printf("La frase tiene %d letras 'a'.\n", contador);

    return 0;
}
