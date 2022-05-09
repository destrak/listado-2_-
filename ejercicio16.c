// timus  nombre : nicolas jarpa Judge_id: 336255TS
// resuelto con ayuda de vicente cuello
#include <stdio.h>
#include <stdlib.h>

int main()
{
     int n, x=1,FM;
    do{
        scanf("%d", &n);
    }while (n< 3 || n> 1000); // si n es menor a 3 o si n es mayor  1000 vuelva a iniciar el ciclo
      int arr[n];
   {
     for(int i=0; i<n; i++) //definimos el arreglo
     {
         scanf("%d", &arr[i]);
     }

     FM=arr[0]+arr[1]+arr[2]; // la fuerza magica que aplican los magos sera igual y sera consecutivas en 3 trazos

     for(int i=1; i<n-2; i++)
     {
         if(arr[i]+arr[i+1]+arr[i+2]>FM) // entonces si los 3 trazos es mayor a la fuerza magica que aplican
         {
             FM=arr[i]+arr[i+1]+arr[i+2]; // entonces la fuerza magica sera la  los 3 trazos osea los 3 arreglos consecutivos
             x=i+1;                       // esto sera el numero de la seccion central donde sera i +1
         }
     }
   }
     printf("%d %d", FM, x+1);  // sera la fuerza magica aplicada y la seccion central
     return 0;
}
