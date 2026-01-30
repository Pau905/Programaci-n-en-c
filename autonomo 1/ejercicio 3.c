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

    return 0;
}

