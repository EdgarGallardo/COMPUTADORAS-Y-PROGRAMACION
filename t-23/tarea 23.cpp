#include <stdio.h>
#include <string.h>

struct alumnos

{int edad;
 char nombre[60];
 char genero;
 char carrera[25];
 char nCuenta[10];
 
 
};

int main (int argc ,char *argv[] ){
	struct alumnos var1; 
	printf("introduce la edad:");
	scanf("%d",&var1.edad);
	
		printf("introduce el nombre:");
		fflush(stdin);
		gets(var1.nombre);
		
		
	printf("edad:%d nombre:%s",var1.edad, var1.nombre);
	
	
	return 0;	
	
}

