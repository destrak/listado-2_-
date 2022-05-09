// timus  nombre : nicolas jarpa Judge_id: 336255TS
// resuelto con ayuda de pedro gajardo
#include <stdlib.h>
#include <stdio.h>

int main(){
	int a,b,c;
	int count = 0;
	int aux[4000];
	int v = 0;
	do{
		scanf("%d", &a);
	}while(a < 1 || a > 4000); // si a es menor a 1 o si a es mayor a 4000 vuelva a preguntar 
	int A[a];
	for (int i = 0; i < a; ++i){
		scanf("%d", &A[i]);		// definimos el primer arreglo
	}
	do{
		scanf("%d", &b);
	}while(b < 1 || b > 4000); // si b es menor a 1 o si a es mayor b 4000 vuelva a preguntar 
	int B[b];
	for (int i = 0; i < b; ++i){ // definimos el segundo arreglo
		scanf("%d", &B[i]);
	}
	do{
		scanf("%d", &c);
	}while(c < 1 || c > 4000); // si a es menor c 1 o si a es mayor a 4000 vuelva c preguntar 
	int C[c];
	for (int i = 0; i < c; ++i){ // definimos el tercer arreglo
		scanf("%d", &C[i]);
	}
	for (int x = 0; x < a; ++x){    // aqui compara los numeros del arreglo de A[X] Y B[Y] Y los que sea iguales los almacena
		for (int y = 0; y < b; ++y){
			if(A[x] == B[y]){
				aux[v] = A[x];
				v++;
				B[y] = 0;
			}
		}
	}
	for (int z = 0; z < v; ++z){ // aqui hace lo mismo compara los numeros del arreglo de A[X] Y C[w] Y los que sea iguales los almacena 
		for (int w = 0; w < c; ++w){
			if(aux[z] == C[w]){
				count++;
				C[w] = 0;
			}
		}		
	}
	printf("%d", count); // imprime la suma  de los numeros que se repiten en los 3 arreglos en A[x] B[y] y C[w]
	return 0; 
}

