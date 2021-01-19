
/* 
 * File:   mainh.c
 * Author: Usuario
 *
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include "funcioness.h"

/*
 * 
 */
int main(int argc, char** argv) {

    int a = 3, b = 2, c;
    float area;
    char inicial;

    c = suma(a,b);
    printf("c: %d\n",c);
    
    c = resta(a,b);
    printf("c: %d\n",c);
    
    area = area_circulo(2);
    printf("area: %f\n",area);
    
    inicial = primer_caracter("evelyn");
    printf("Primer caracter: %c",inicial);
    


return (0);
}

