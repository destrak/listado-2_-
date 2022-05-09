// timus  nombre : nicolas jarpa Judge_id: 336255TS
// resuelto con ayuda de pedro gajardo
#include <stdlib.h>
#include <stdio.h>

int main(){
	int k, n;
	int trafico;
	do{
		scanf("%d %d", &k, &n);
	}while(k < 1 || n > 100 ); // aca definimos si k es menor 1 o si n es mayor a 100 vuelva a inciar otro ciclo
	int Arreglo[n];
	for(int i = 0; i < n; i++){ //definimos el arreglo
		scanf("%d", &Arreglo[i]);
	}
	for(int i = 0; i < n-1; i++){ 
	    if(Arreglo[i]-k > 0){		//aca condicionamos que si la cantidad de autos que an pasado menos el tiempo transcurrido es mayor  0 entonces
	        trafico = Arreglo[i]-k;	// que el trafico sea igual a la cantidad de autos - el tiempo transcurrido
	        Arreglo[i + 1] = Arreglo[i + 1] + trafico; // la cantidad de trafico en sera igual al trafico + el trafico que sigue
	    }
	}
	if(Arreglo[n - 1] - k <= 0){ // si la cantidad de autos en el tramo anterior  menos el tiempo es menor a 0 sera siempre 0 el trafico ya que habran pasado todos sino que imprima  la cantidad de trafico
	    printf("0");
	}else{
	    printf("%d", Arreglo[n - 1] - k);  //imprima la cantidad de trafico
	}
	return 0;
}
 