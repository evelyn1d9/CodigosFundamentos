
/* 
 * File:   hanoi.c
 * Author: Usuario
 *
 * Created on 24 de enero de 2021, 03:12 PM
 */

#include <stdio.h>
#include <stdlib.h>
void moverDiscos (int n, int origen, int destino, int aux);
/*
 * 
 */

int main() {
    int cantDiscos;
   printf("Ingrese la cantidad de discos a utilizar: ");
   scanf("%d", &cantDiscos);
   
   if (cantDiscos > 5){
      printf ("\n\nPor favor, ingrese 5 discos o menos para su correcto funcionamiento\n\n\n");
      system ("PAUSE");
      return 0;
   }
   printf ("\n");


moverDiscos(cantDiscos, 1, 2, 3);
   printf ("\n\n");
   system ("PAUSE");
   return(0);
 
}

void moverDiscos (int n, int origen, int destino, int aux){
    if (n > 0){
         moverDiscos (n-1, origen, aux, destino);
          printf("Muevo un disco de %d a %d\n", origen, destino);
           moverDiscos (n-1, aux, destino, origen);
    }
}