
/* 
 * File:   1.c
 * Author: Usuario
 *
 * 
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    float cali;
   printf("introduzca la calificacion: ");
   scanf("%f",&cali);
   
   if (cali>=6 && cali<=10) {
       printf("Aprobado");
   }
   else { 
       if (cali>=0 && cali<5)
           printf("Reprobado");
       else 
           printf ("Error");
   }
   
        
    

return (EXIT_SUCCESS);
}

