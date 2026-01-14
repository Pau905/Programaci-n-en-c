#include <stdio.h>
#define AA 2025  // Año actual definido como constante

int main() {
    int anaci, edad;

  do {
        printf("Dime l'any en que vas naixer: ");
        scanf("%d", &anaci);

        if (anaci >= AA) {
            printf("Es impossible que tingues eixa edat.\n");
        }

    } while (anaci >= AA);
    
    edad = AA - anaci;

    printf("Tens : %d anys.\n", edad);

    return 0;
    
}
