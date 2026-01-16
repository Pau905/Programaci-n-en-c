#include <stdio.h>
#include <conio.h>

#define ALUMNOS 20

int main() {
    FILE *f_mates, *f_fisica, *f_info;
    float mates[ALUMNOS], fisica[ALUMNOS], info[ALUMNOS];
    float medias[ALUMNOS];
    float sumaMedias = 0.0, mediaGrupo=0;
    int i, encimaMedia = 0;


    f_mates = fopen("mates.txt", "r");
    f_fisica = fopen("fisica.txt", "r");
    f_info = fopen("info.txt", "r");

    if (!f_mates || !f_fisica || !f_info) {
        printf("Error abriendo los archivos de notas.\n");
        return 1;
    }

    for (i = 0; i < ALUMNOS; i++) {
        fscanf(f_mates, "%f", &mates[i]);
        fscanf(f_fisica, "%f", &fisica[i]);
        fscanf(f_info, "%f", &info[i]);
    }
    
    fclose(f_mates);
    fclose(f_fisica);
    fclose(f_info);



    for (i = 0; i < ALUMNOS; i++) {
        medias[i] = (mates[i] + fisica[i] + info[i]) / 3.0;
        sumaMedias += medias[i];
    }


    mediaGrupo = sumaMedias / ALUMNOS;


    for (i = 0; i < ALUMNOS; i++) {
        if (medias[i] > mediaGrupo)
            encimaMedia++;
    }


    printf("Medias individuales:\n");
    for (i = 0; i < ALUMNOS; i++) {
        printf("Alumno %2d: %.2f\n", i + 1, medias[i]);
    }

    printf("\nMedia del grupo: %.2f\n", mediaGrupo);
    printf("Alumnos por encima de la media: %d\n", encimaMedia);


	getch();
    return 0;
}
