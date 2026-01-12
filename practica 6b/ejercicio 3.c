#include <stdio.h>

int perfecto(int n) {
    int suma = 0, i;

    for (i = 1; i <= n/2; i++) {
        if (n % i == 0) {
            suma += i;
            
        }
    }
	if(suma==n)
   		return 1;
    else
    	return 0;
}

void imprime_perfectos(int a, int b) {
	int i;
    printf("Numeros perfectos entre %d y %d:\n", a, b);
    for (i = a; i <= b; i++) {
        if (perfecto(i)) {
            printf("%d\n", i);
        }
    }
}

int main() {
    FILE *f;
    int a, b;

    f = fopen("datos.txt", "r");
    if (f == NULL) {
        printf("Error al abrir el fichero datos.txt\n");
        return 1;
    }

    fscanf(f, "%d %d", &a, &b);
    fclose(f);

    imprime_perfectos(a, b);

    return 0;
}
