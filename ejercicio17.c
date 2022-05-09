// timus  nombre : nicolas jarpa Judge_id: 336255TS
// resuelto con ayuda de pedro gajardo
#include <stdlib.h>
#include <stdio.h>

int main(){
	int N, tmp;
	do{
		scanf("%d", &N);
	}while(N<1 || N>100); // si n es menor a 1  o si n es mayor  100
	int S[N][N];
	tmp = N-1; // DEFINIMOS una variable temporal como la cantidad N - 1
	for (int i = 0; i < N; ++i){
		for (int j = 0; j< N; ++j){
			scanf("%d", &S[i][j]); // definimos la matriz
		}
	}
	for(int a = 0; a < N; ++a){
		for (int b = 0; b <= a; ++b){
			printf("%d ", S[a-b][b]);  //aca pedimos imprimir la matriz S[a-b][B] entonces imprimira de forma diagonalizada pero en el ejemplo de la 4x4 notamos que no toma los ultimos 6 entonces
		}
	}
	int v = 0;
	for(int c = N-1; c >= 0; --c){ //pasamos para aca donde obtenemos los puntos que nos faltan  con la matriz S[ N-d][ v + d] que en la 4x4 serian los del ejemplo 11 12 13 14 15 16
		for (int d = 1; d <= c; ++d){
			printf("%d ", S[N-d][v + d]);
		}	
		v++; // definimos el v++ para que obtenga los numeros que faltan y no los repita ya que no nos sirve
	}
	return 0;
}