// creador yo
#include <stdio.h>
#include <stdlib.h>
int main(){
	int n; 
	do{
		printf("ingrese numero natural\n");
		scanf("%d", &n);
	}while(n<0);
	int num = 2, potencia = 1, resultado = 2;
	printf("1, ");
	for(int i = 2; i <=n; i++ ){
		resultado = num * potencia;
		 potencia =num * resultado ;
		potencia = resultado;
		
		printf("%d ,",resultado);
	}

        printf("\n");
	
	
	
	return 0;
}