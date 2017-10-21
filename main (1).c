#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
int num1, num2;
	float opc;
 
	printf ("Menu:\n1. Suma\n2. Resta\n3. Multiplicacion\n4. Division\nOpcion:");
	scanf ("%d", &opc);
	{
	if (opc < 1 || opc > 4)
	
		printf ("Opcion incorrecta...\n\n");
		return 1;
	}
{
	printf ("\nnum1: ");
	scanf ("%f", &opc);
	printf ("\nnum2: ");
	scanf ("%f", &opc);
}
	switch (num1, num2)// le faltaria de clarar la variable que valla sensando los casos
	{
		case 1:	printf ("Respuesta --> %f", num1+num2); break;
		case 2:	printf ("Respuesta --> %f", num1-num2); break;
		case 3:	printf ("Respuesta --> %f", num1*num2); break;
		case 4:	printf ("Respuesta --> %f", num1/num2); break;
	}


	
	return 0;
}
