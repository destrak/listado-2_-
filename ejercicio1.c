// creador yo
#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	do{
		printf("ingrese un numero entero positivo\n");
			scanf("%d", &n);
	}while(n <0);
	int num1 = 1, num2 = 0, suma = 1;
	for(int i = 1; i <= n; i++){
		suma = num1 + num2;
		num1 = num2;
		num2 = suma;

		printf(" %d, ",suma);

	}
	printf("\n");
	return 0;
 }

