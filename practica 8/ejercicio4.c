#include <stdio.h>


#define CONTRA "3r5g8"

int main() {
    char password[10];

    printf("Introduce el password (5 caracteres): ");
    fgets(password, sizeof(password), stdin);

  
    int len = strlen(password);
    if (password[len - 1] == '\n') {
        password[len - 1] = '\0';
    }

    if (strcmp(password, CONTRA) == 0) {
        printf("Password correcto.\n");
    } else {
        printf("Password incorrecto.\n");
    }

    return 0;
}
