
/* 
 * File:   2.c
 * Author: Usuario
 *
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
void main (int argc, char** argv) {

    int arreglo[10];
    int x;
    
    for (x=1; x<=10; x++) {
        arreglo[x] = x;
    }
    
    for (x=1; x<=10; x++) {
        printf("%d\n",arreglo[x]);
        
    }
    system("pause");
    
    
}