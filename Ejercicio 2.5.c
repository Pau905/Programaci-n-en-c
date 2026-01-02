#include <stdio.h>
#include <conio.h>

int main() {
    float num1, num2;

    printf("Dime un numero: ");
    scanf("%f", &num1);
	printf("Dime otro numero: ");
    scanf("%f", &num2);

    if (num1 > num2) {
        printf("El %f es el mas grande.\n", num1);
    } else {
        printf("El %f es el mas grande.\n", num2);
    }
    
	getch();
    return 0;
}

