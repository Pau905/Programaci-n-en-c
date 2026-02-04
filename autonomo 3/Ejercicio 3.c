#include <stdio.h>

int main(){
int num, unidades, decenas, centenas;

FILE *F, *S, *D, *C;

F = fopen("num3cifras.txt", "r");

fscanf(F,"%d", &num);


centenas=num/100;
decenas=(num%100)/10;
unidades=num%10;

fclose(F);

S=fopen("unidades", "w");

fprintf(S,"Unidad: %d", unidades);

fclose(S);

D=fopen("decenas", "w");

fprintf(D,"decenas: %d", decenas);

fclose(D);

C=fopen("centenas", "w");

fprintf(C,"centenas: %d", centenas);

fclose(C);


return 0; }


