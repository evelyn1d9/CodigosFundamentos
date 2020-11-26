
/* 
 * File:   maximo y minimo.c
 * Author: Usuario
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

     x = 0;
     int min = arreglo[0];
    int max = arreglo[0];
    
    for(x=0; x<n; x++) {
       if (arreglo[x]<min) {
           min = arreglo[x];
        }
    }
       printf("\nEl valor min es: %d",min);
       
       for (x=0; x<n; x++) {
         if(arreglo[x]>max) {
          
          max = arreglo[x];
             
         }    
       }  
       printf("\nEl valor max es: %d",max);
            
       return(0);
       
}



