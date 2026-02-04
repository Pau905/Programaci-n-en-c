#include <stdio.h>

// Constantes para los precios
#define PRECIO_CHORIZO 1.10
#define PRECIO_ATUN 1.40
#define PRECIO_AGUA 0.50
#define PRECIO_COLA 0.75
#define PRECIO_NARANJA 0.70

int main() {
    int u_chorizo, u_atun, u_agua, u_cola, u_naranja;
    float total;
    char nombre_fichero[50];
    FILE *F;

    printf("Introduce el nombre del fichero: ");
    scanf("%s", nombre_fichero);

 
    F = fopen(nombre_fichero, "w");


    printf("Introduce el número de bocadillos de chorizo: ");
    scanf("%d", &u_chorizo);

    printf("Introduce el número de bocadillos de atún: ");
    scanf("%d", &u_atun);

    printf("Introduce el número de aguas: ");
    scanf("%d", &u_agua);

    printf("Introduce el número de colas: ");
    scanf("%d", &u_cola);

    printf("Introduce el número de naranjas: ");
    scanf("%d", &u_naranja);

    total = u_chorizo * PRECIO_CHORIZO +
            u_atun * PRECIO_ATUN +
            u_agua * PRECIO_AGUA +
            u_cola * PRECIO_COLA +
            u_naranja * PRECIO_NARANJA;

    printf("\nEl coste total de las consumiciones es: %.2f €\n", total);
    
    fprintf(F, "Cuenta del bar:\n");
    fprintf(F, "-----------------------------\n");
    fprintf(F, "Bocadillos de chorizo: %d x %.2f € = %.2f €\n", u_chorizo, PRECIO_CHORIZO, u_chorizo * PRECIO_CHORIZO);
    fprintf(F, "Bocadillos de atún:    %d x %.2f € = %.2f €\n", u_atun, PRECIO_ATUN, u_atun * PRECIO_ATUN);
    fprintf(F, "Aguas:                 %d x %.2f € = %.2f €\n", u_agua, PRECIO_AGUA, u_agua * PRECIO_AGUA);
    fprintf(F, "Colas:                 %d x %.2f € = %.2f €\n", u_cola, PRECIO_COLA, u_cola * PRECIO_COLA);
    fprintf(F, "Naranjas:              %d x %.2f € = %.2f €\n", u_naranja, PRECIO_NARANJA, u_naranja * PRECIO_NARANJA);
    fprintf(F, "-----------------------------\n");
    fprintf(F, "TOTAL: %.2f €\n", total);

    fclose(F);

    printf("La cuenta se ha guardado correctamente en el fichero '%s'.\n", nombre_fichero);

    return 0;
}

