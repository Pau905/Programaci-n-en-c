#include <stdio.h>


#define MAX 300

int main() {
    char frase[MAX];
    FILE *archivo;

    printf("Introduce una frase: ");
    fgets(frase, sizeof(frase), stdin);

    archivo = fopen("salida.txt", "w");
    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1;
    }

    for (int i = 0; frase[i] != '\0'; i++) {
      
        if ((frase[i] == 'n' || frase[i] == 'N') &&
            (frase[i+1] == 'y' || frase[i+1] == 'Y')) {

        
            if (frase[i] == 'n')
                fputc('ñ', archivo);
            else
                fputc('Ñ', archivo);

            i++; 
        } else {
            fputc(frase[i], archivo);
        }
    }

    fclose(archivo);

    printf("La frase corregida se ha guardado en salida.txt\n");

    return 0;
}
