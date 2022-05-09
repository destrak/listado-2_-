//resuelto por mi pero me guie de un video
#include <stdio.h>
#include <stdlib.h> 
int main(){
	int det = 0, mul, aux, i, j;
	int matriz[4][4];
	for(i = 0; i <4; i++){
	for(j = 0; j< 4; j++){ // aqui defino las matrices 4x4
		printf("introdusca los elemntos de %d,%d de la matriz\n",i , j);
		scanf("%d", &matriz[i][j]);
	}	

	}
	for(i = 0; i <4; i++){ 
		mul =1;
		aux = i;
	for(j = 0; j< 4; j++){
		mul *=matriz[j][aux];  //aca defino que la multiplicacion sera de la matriz j por la aux
		if(aux < 3){           // aca que el aux nunca sea mayor a 3
			aux++;	           //y aca le sumo 1 para volver a un dato que me sirve 
		}
	else{
		aux = 0; // si no se cumple todo lo demas que aux sea 0
	}
}
	det += mul;    // el determinante sera la suma de todos los mul
}
	printf("%d", det); // imprimira la suma del determinante
 }