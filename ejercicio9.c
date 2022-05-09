//resuelto solo
#include <stdlib.h>
#include <stdio.h>

int main(){
	int n, puntox, puntoy;
	do{
		printf("Ingrese un número positivo\n");
		scanf("%d", &n);
	}while(n <= 0); 
	int v[n], b[n];
	for (int i = 0; i < n; ++i){
			printf("Escriba las coordenada x,y\n");
			scanf("%d %d", &v[i], &b[i]);
	}
	for (int i = 0; i < n; i++){
		for (int j = i + 1; j < n; j++){
		if( v[i] < v[j]){
		
   		
 	int aux = v[i];
	v[i] = v[j];
	v[j] = aux;
}
}
}
for (int i = 0; i < n; i++){
		for (int j = i + 1; j < n; j++){
		if( b[i] < b[j]){
		
   		
 	int aux = b[i];
	b[i] = b[j];
	b[j] = aux;
	}
}
}


	for(int i = 0; i < n; i++){
		puntox = v[0] + v[n-1];
		puntoy = b[0] + b[n-1];
	}
		
		printf("(la mediana sera) %d %d\n", puntox /2, puntoy/2); 
		
	return 0;
}


