#include <stdio.h>
 int main()
 { int num1, num2;
 	printf("dime un numero: ");
 	scanf("%d", &num1);
 	
 	printf("dime un atre numero:");
 	scanf("%d", &num2);
 	
 	if (num1==num2) {
 		printf("Els numeros són iguals");
 		}else{	 
 			if (num1>num2) {		 
 			printf("El numero %d es mes gran que el %d.\n", num1, num2);
 				}else{		 
 				printf("El numero %d es mes gran que el %d.\n", num2,num1);
 				}
 	}
 	
 		return 0;
 }
