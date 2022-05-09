//creador yo
#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	do{
		printf("elija la cantidad de elementos\n");
		scanf("%d", &n);
	}while( n <= 0);
	int i, j, promedio = 0, mediana, mayor, menor, contador = 1;
	int arreglo[n];
	int sumas[n];
	for( i = 0; i< n; i++){
		printf("ingrese los numeros de la cantidad seleccionada %d\n", i +1);
		scanf("%d", &arreglo[i]);
	}
	for( i = 0; i < n; i++){
		for(j = 0; j < n; j++ ){
		if( arreglo[i] < arreglo[j]){
		
   		
 	int aux = arreglo[i];
	arreglo[i] = arreglo[j];
	arreglo[j] = aux;
}
}
}


	for(i = 0; i < n; i++){
		menor = arreglo[0];
		if (mayor < arreglo[i]){
		mayor = arreglo[i];
		promedio += arreglo[i];
		printf("\n");	
		}
	}
		if(n % 2 == 0){
			printf("la mediana sera %d %d \n", arreglo[(n-1)/2], arreglo[((n)/2)]);
		}
		else if(n % 2 != 0){
			printf("la mediana sera %d", arreglo[n/2]);
		}
		printf("\n");

	
	printf(" el menor es %d\n", menor);
	printf(" el mayor es %d\n", mayor);
	printf("el promedio es %d\n", promedio / n);

}


	
