
#include <stdio.h>
#include <stdlib.h>
#include "funcioness.h"



float PI=3.1416;

int suma(int a, int b) {
    return a+b;
    
}

int resta (int a, int b) {
    return a-b;
}

char primer_caracter(char*cadena) {
    return cadena[0];
}

double area_circulo(int radio) {
    return PI*radio*radio;
}

