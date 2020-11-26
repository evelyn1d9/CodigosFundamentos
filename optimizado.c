
/* 
 * File:   optimizado.c
 * Author: Usuario
 *
 * 
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

int x = 0;
int n;
 
  printf ("Introduce los valores de n: ");
  scanf("%d",&n);
   
  
int arreglo[n];

  for(x = 0; x < n; x++)
   {
        printf("Introduce valores nuevos: ");
        scanf("%d",&arreglo[x]);
    }

int ta;
int j;



printf("la lista desordenada es: \n");
for(x = 0; x<n; x++) 
   printf ("%d\n", arreglo[x]);

for (x = 0; x<n; x++) {
    for (j = 0; j<x; j++) {
          if (arreglo[x] < arreglo[j]) {
             ta = arreglo[j];
             arreglo[j] = arreglo [x];
             arreglo[x] = ta; 
            }
    }
        
    
     
}
    
 printf("\nLos valores ordenados de la lista son: \n");
   for(x=0; x<n; x++) 
    
       printf("%d\n",arreglo[x]);



return (EXIT_SUCCESS);
}

