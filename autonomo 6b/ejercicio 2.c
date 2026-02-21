#include <stdio.h>
#include <math.h>
int main() {
    int opcion;

    do {
        opcion = menu();  

        switch (opcion) {
            case 1: sumar(); break;
            case 2: restar(); break;
            case 3: multiplicar(); break;
            case 4: dividir(); break;
            case 5: elevar_a_2(); break;
            case 6: potencia(); break;
            case 7: 
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción no válida.\n");
        }

        printf("\n");

    } while (opcion != 7);

    return 0;
}


int menu() {
    int op;

    printf("===== CALCULADORA =====\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("5. Elevar al cuadrado\n");
    printf("6. Potencia\n");
    printf("7. Salir\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &op);

    return op;
}




void sumar() {
    float a, b;
    printf("Ingrese dos números: ");
    scanf("%f %f", &a, &b);
    printf("Resultado: %.2f\n", a + b);
}

void restar() {
    float a, b;
    printf("Ingrese dos números: ");
    scanf("%f %f", &a, &b);
    printf("Resultado: %.2f\n", a - b);
}

void multiplicar() {
    float a, b;
    printf("Ingrese dos números: ");
    scanf("%f %f", &a, &b);
    printf("Resultado: %.2f\n", a * b);
}

void dividir() {
    float a, b;
    printf("Ingrese dividendo y divisor: ");
    scanf("%f %f", &a, &b);
    
    if (b == 0)
        printf("Error: no se puede dividir entre cero.\n");
    else
        printf("Resultado: %.2f\n", a / b);
}

void elevar_a_2() {
    float a;
    printf("Ingrese un número: ");
    scanf("%f", &a);
    printf("Resultado: %.2f\n", a * a);
}

void potencia() {
    float base, exp;
    printf("Ingrese base y exponente: ");
    scanf("%f %f", &base, &exp);
    printf("Resultado: %.2f\n", pow(base, exp));
}
