// timus  nombre : nicolas jarpa Judge_id: 336255TS
// resuelto con ayuda de pedro gajardo
#include <stdlib.h>
#include <stdio.h>

int main(){
	int n, k;
	int bombas = 0, drones = 0;
	do{
		scanf("%d %d", &n, &k);
	}while(n < 1 || k > 10000); // si el n es menor a 1 o el k es mayor a 10000 vuelva a buscar
	int arreglo[n];
	for (int i = 0; i < n; ++i){ //definimos el arreglo
		scanf("%d",&arreglo[n]);
		if(k - arreglo[n] > 0){ // si la cantidad de drones - el ejercito con bombas es mayor a 0
			drones = drones + k - arreglo[n];// que los drones que sobreviven seran  los drones - la cantidad de bombas impactadas
		}
		if(k - arreglo[n] < 0){ // si la cantidad de drones - ejercito con bombas es menor a 0 
			bombas = bombas + arreglo[n] - k; // las bombas restantes seran el ejercito con bombas osea la cantidad de bombas - los drones impactados osea las bombas usandas en drones
		}
	}
	printf("%d %d", bombas, drones); // la cantidad de bombas sin usar y la drones que sobrevivieron
	return 0;
}