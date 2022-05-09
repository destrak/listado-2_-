//resuelto con ayuda pedro gajardo
#include <stdlib.h>
#include <stdio.h>

int main(){
	int n, aux, aux2;
	do{
		printf("Ingrese un número positivo\n");
		scanf("%d", &n);
	}while(n <= 0); //aca definimos que si n es menor a 0 nos vuelva a preguntar por un numero
	int V[2][n];
	for (int i = 0; i < n; ++i){
			printf("Escriba la %d coordenada (x,y)\n", i+1);
		for (int j = 0; j < 2; ++j){ // definimos la matriz
			scanf("%d", &V[j][i]);
		}
	}
	printf("Las coordenadas ordenadas de menor a mayor con respecto a x son:\n");
	for (int i = 0; i < n; i++){
		for (int j = i + 1; j < n; j++){
			if(V[0][j] == V[0][i]){
				if(V[1][j] < V[1][i]){ // aca lo que hacemos es ordenar la matriz de menor a mayor comparando que si el x es el mismo pero con y diferentes que ordene la matriz con respecto a x con el y menor a mayor
					aux = V[0][j];		// por ejemplo si tengo un (1,2) (1,1) (1,0) los ordene ya que su x el mismo pero varia el y entonces quedaria asi (1,0) (1,1) (1,2)
					V[0][j] = V[0][i];  
					V[0][i] = aux;
					aux2 = V[1][j];
					V[1][j] = V[1][i];
					V[1][i] = aux2;
				}
			}else{
				if(V[0][j] < V[0][i]){ // aca lo que hacemos es que si la matriz es  diferente de x la ordene de mayor a menor   las cordenadas ingreseda independiente del y se orden
					aux = V[0][j];
					V[0][j] = V[0][i]; // por ejemplo que si las cordenadas son (1,8) (0, 1) ( 3,4) (2,5) se ordenen asi (0,1) (1,8) (2,5) (3,4)
					V[0][i] = aux;
					aux2 = V[1][j];
					V[1][j] = V[1][i];
					V[1][i] = aux2;
				}
			}
		}
		printf("(%d, %d)\n", V[0][i], V[1][i]); // obtenemos las cordenadas en orden
	}	
	return 0;
}

