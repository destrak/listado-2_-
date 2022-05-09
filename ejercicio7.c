// con ayuda de raul zapata
#include <stlib.h>
#include <stdio.h>

int main(){
  int n;
  printf("Ingrese un numero:\n");
  scanf("%d",&n);
  
  int vector[n];
  for(int i=0;i<n;++i){ // definimos el arreglo
    printf("Rellene con numeros enteros:\n"); 
    scanf("%d",&vector[i]);
  }


  for(int i=0;i<(n-2);++i){  //el primero es para mantener el primer elemento
    for(int j=i+1;j<n-1;++j){ // el segundo es para que cambie y utilice todo los numeros dependiendo del primero
      for(int s=j+1;s<n;++s){ // el tercero ordena los numeros restantes
        printf("%d %d %d\n", vector[i],vector[j],vector[s] ); // nos entrega todas las combinaciones con esos numeros
      }
    }
  }


  return(0);
}