#include <stdio.h>
#include <conio.h>

int main(){
	int num, i;
		printf("Dime un numero real ");
			scanf("%d", &num);
printf("Numero: %d\n\t", num);
for(i=100;i>=1;i--){
	if(num%i==0){
		
		printf("%d  ", i);
	}
	
}
getch();
return 0;
}
