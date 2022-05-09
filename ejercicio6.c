//con ayuda de pedro xavier
#include <stdlib.h>
#include <stdio.h>

int main(){ 


   int n;
   scanf("%d", &n);

   int pasc[n];
   
   int x, i, j;

   x=0;

  
   for (i=1; i<=n ; i++)
   {
        
         for (j=x; j>=0; j--)
         {
             if(j==x || j==0)  //decimos que si j es igual a x o que j sea igual a 0 a este sea igual a 1
             {
                  pasc[j] = 1;
             }
             else 
             {
                  pasc[j] = pasc[j] + pasc[j-1]; // y si no es ni 0 ni igual al x entonces imprima arreglo[j] + arreglo[j -1] = al arreglo[j]
             }
         }

        x++; // le sumamos 1 por que no nos sirve el valor que nos arroja 
        printf("\n");
        
        for (j=1; j<=n-i; j++)  // que separa los datos
             printf("   ");

        for(j=0; j<x; j++) 
        {
             printf("%d   ", pasc[j]); //imprime los valores del pascal
        }
   }
return 0;
}