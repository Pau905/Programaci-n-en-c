#include <stdio.h>

int main(){
	int num1, num2, num3, num4, decimal;
	
FILE *F, *P, *I;

F=fopen("datos.txt","r");

fscanf(F,"%d",&num1);
fscanf(F,"%d",&num2);
fscanf(F,"%d",&num3);
fscanf(F,"%d",&num4);	


fclose(F);

decimal= num1*8 + num2*4 + num3*2 + num4*1;

if(decimal%2 == 0){
	P=fopen("par.txt","w");
	fprintf(P,"El numero %d%d%d%d corresponde al numero decimal par: %d", num1, num2, num3, num4, decimal);
	fclose(P);
}else{
	I=fopen("impar.txt","w");
	fprintf(I,"El numero %d%d%d%d corresponde al numero decimal impar: %d", num1, num2, num3, num4, decimal);
	fclose(I);
}

return 0;
}
