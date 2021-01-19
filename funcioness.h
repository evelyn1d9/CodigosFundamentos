/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   funcioness.h
 * Author: Usuario
 *
 * 
 */

#ifndef FUNCIONESS_H
#define FUNCIONESS_H



#ifdef __cplusplus
extern "C" {
#endif
    
    int suma(int a, int b);
    int resta(int a, int b);
    char primer_caracter(char*cadena);
    double area_circulo(int radio);
    
    
    
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


#ifdef __cplusplus
}
#endif

#endif /* FUNCIONESS_H */

