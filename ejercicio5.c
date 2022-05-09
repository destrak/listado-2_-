//resuelto con ayuda de pedro gajardo
#include <stdlib.h>
#include <stdio.h>

int main(){
	int n;
	do{
		printf("ingrese un  número positivo\n");
		scanf("%d", &n);
	}while(n <= 0);// aca definimos que si n es menor a 0 vuelva a preguntar por el dato
	int Arreglo[n], Pares[n], Inpares[n];
	for (int i = 0; i < n; i++){	//definimos el arreglo
		scanf("%d", &Arreglo[i]);
		}
	printf("Los números pares ordenados seran\n");
	for (int i = 0; i < n; i++){
		for (int j = i + 1; j < n; j++){ // aca ordenamos el arreglo de menor a mayor del arreglo 
			if(Arreglo[i] > Arreglo[j]){ // por ejemplo si el arreglo era 1 2 6 4 3 lo ordene 1 2 3 4 6
				int aux = Arreglo[j];
				Arreglo[j] = Arreglo[i];
				Arreglo[i] = aux; 
			}
		}
	}
	for (int i = 0; i < n; i++){ // aca de los arreglos ordenados buscamos los que sean pares y los ordenamos de menor a mayor 
		if(Arreglo[i]%2 == 0){	// por ejemplos si teniamos un arreglo de 1 2 6 4 3 solo tomara el 2 6 4 y lo ordenara de menor a mayor a 2 4 6
			Pares[i] = Arreglo[i];
			printf("%d\n", Pares[i]); // quedaria 2 4 6
		}
	}
	printf("Los números impares ordenados seran:\n");
	for (int i = 0; i < n; i++){
		for (int j = i + 1; j < n; j++){ // aca hacemos basicamente lo mismo pero al revez buscamos ordenar el arreglo de mayor a menor
			if(Arreglo[j] > Arreglo[i]){ // nos quedaria asi 6 4 3 2 1
				int aux = Arreglo[j];
				Arreglo[j] = Arreglo[i];
				Arreglo[i] = aux;
			}
		}
	}
	for (int i = 0; i < n; i++){
		if(Arreglo[i]%2 != 0){
			Inpares[i] = Arreglo[i]; // y aca con el mismo arreglo que antes buscamos los impares pero de mayor a menor
			printf("%d\n", Inpares[i]); // quedaria asi 3 1
		}
	}
	return 0;
}