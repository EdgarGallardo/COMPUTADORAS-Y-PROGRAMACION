#include<stdio.h>

void fncuadrado(int num1,int num2){
int j, i ;

for(j=1;j<=num1;j++){
	for(i=1;i<=num2-1;i++){
		printf("+");
	}printf("+\n");
}
    return;
}
int main()
{
	int num1, num2;
	printf("dame la altura:");
	scanf("%d",&num1);
	printf("dame la base:");
	scanf("%d",&num2);
	
fncuadrado(num1, num2);

}

