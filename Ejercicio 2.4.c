#include <stdio.h>
#include <conio.h>

int main() {
    int edad;

    printf("Dime tu edad: ");
    scanf("%d", &edad);

    if (edad < 18) {
        printf("Eres menor de edad.\n");
    } else {
        printf("Eres mayor de edad.\n");
    }
    
	getch();
    return 0;
}

