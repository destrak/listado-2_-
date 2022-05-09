//creador yo
// timus  nombre : nicolas jarpa Judge_id: 336255TS
#include <stdio.h>
#include <stdlib.h>
int main(){
	int n, suma;
	scanf("%d", &n);
	
			if(n <= 1  && n >= -10000 ){
				suma = (( -n )* (n -1))/2;
				printf("%d\n", suma +1);


		}
		else if(n >= 1 && n <= 10000){
		suma = (( n )* (n + 1))/2;
				printf("%d\n", suma );
			}
		
return 0 ;
}
