
/* 
 * File:   2.c
 * Author: Usuario
 *
 * Created on 6 de enero de 2021, 12:12 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
void main (int argc, char** argv) {


    double n;    //numero real
    double r;    //raiz cuadrada del num
    double aprox; //Aproximacion de la raiz

    do {
        printf("Introduzca un numero: ");
        scanf("%1f",&n);
        
    }
    while (n<0);
    r = n/2;
    
    do {
        aprox = r;
        r = (r+n/r)/2;
        
    } while (fabs(r-aprox) > 1e-6);
    
    printf ("La raiz cuadrada de %1f es %1f",n,r);
        



}

