#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int iA;
	int iB;
	float fC;	
	
	printf("\nDame 3 numeros dos enteros y uno flotante");
	
	printf("\nNumero (entero) 1:");
		scanf("%d",&iA);
	
	printf("\nNumero (entero) 2:");
		scanf("%d",&iB);
	
	printf("\nNumero (flotante)3:");
		scanf("%f",&fC);
		

	printf("\nTus numeros son: 1.-entero= %d \t 2.-entero= %d\t 3.-flotante= %.2f\n ",iA,iB,fC);	
		
		
		if (iA==iB && iB==fC && iA==fC ){
			printf("\nTodos son iguales");
		
		}
		
		/**
		en espe apartado van mas if y se hacen las comparaciones siguientes
		*/
	
	return 0;
}
