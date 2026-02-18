#include <stdio.h>


int Multiplo3(int num) {
    if (num % 3 == 0) {
        return 1; 
    } else {
        return 0; 
    }
}
int Par(int num) {
    if (num % 2 == 0) {
        return 1; // Es par
    } else {
        return 0; // No es par
    }
}
int main() {
	int i;
    printf("Numeros multiplos de tres y pares, menores de 100:\n");
    for ( i=1; i < 100; i++) {
        
      
        if (Multiplo3(i) == 1 && Par(i) == 1) {
            printf("%d\n", i);
        }
    }

    return 0;
}
