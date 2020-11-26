
/* 
 * File:   promedio.c
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
    printf("ingrese el valor de n: ");
    scanf("%d",&n);
            
    int arreglo[n];
    for (x; x<n; x++) {

        printf("ingrese un valor nuevo: ");
        scanf("%d",&arreglo[x]);
    }
    
    
    
    x = 0;
        int suma = 0;
        for (x; x<n; x++) {
            suma = suma + arreglo[x];
            
        }
    
        printf("%d es el promedio",suma/n);
        




return (EXIT_SUCCESS);
}

