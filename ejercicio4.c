// creador yo
#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	do{
		printf(" ingrese un numero n \n");
		scanf("%d", &n);
	}while(n <= 1);
	int primo, compuesto;
	if(n == 2 || n == 3 || n ==5 || n ==7){
		printf("primo\n");
	}
	else if( n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0){
		printf("compuesto \n");

	}
	else{
		printf("primo\n");
	}
	}
	

		
