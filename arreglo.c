
/* 
 * File:   arreglo.c
 * Author: Usuario
 *
 * Created on 21 de noviembre de 2020, 10:07 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int  arreglo[100]; 
    int  arregloA[100];
          
    arreglo[0] = 2;
    arreglo[1] = 3;
    
    
    int  sumatoria = 0;
    
    
   for (int x = 0; x<=100; x++) {
      
      
      sumatoria = (arreglo[x] + arregloA[x]) + (arreglo[x] + arregloA[x]);
     
          
       printf("la suma es %d\n",sumatoria);  
       
         
             
               
    }
        
  
   
  
    return (0);
    
    
    
}




