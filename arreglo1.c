
/* 
 * File:   arreglo1.c
 * Author: Usuario
 *
 * Created on 22 de noviembre de 2020, 12:35 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

  int arreglo[10], i;
 
    for (i = 0; i < 10; i++)
    {
        printf ("Introduce el dato de la posición [%d]: ", i);
        scanf("%d", &arreglo[i]);
    } 
 
    printf("\nLos elementos del arreglo son: \n\n");
 
    for(i = 0; i < 10; i++)
    {
        printf("%d ", arreglo[i]);
    }
 
 





return (EXIT_SUCCESS);
}

