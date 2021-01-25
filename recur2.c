
/* 
 * File:   recur2.c
 * Author: Usuario
 *
 * 
 */

#include <stdio.h>
#include <stdlib.h>
double factorial(int n);
/*
 * 
 */
void main() {

int numero;
  printf("\n Introduce un número entero: ");
  scanf("%d", &numero);
  printf("\n El factorial de %d es: %ld", numero, factorial(numero));

}

double factorial (int numero)
{
  if (numero <= 1) 
    return 1;
  else 
    return numero * factorial (numero - 1);
}







