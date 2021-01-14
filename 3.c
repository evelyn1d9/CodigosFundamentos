
/* 
 * File:   3.c
 * Author: Usuario
 *
 *
 */

#include <stdio.h>
#include <stdlib.h>

int arreglo[] = {5,6,7,8,9};
int *ptr;

/*
 * 
 */
 
int main(int argc, char** argv) {
   
    int i = 0;
    ptr = &arreglo[0];
    
    for (i=0; i<10; i++) {
        printf("ptr + %d\n",i,*(ptr + i));
        
    }
    

}
