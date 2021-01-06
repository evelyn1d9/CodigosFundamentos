
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

    int n;
    int divisor;
    
    printf("introduzca un numero: ");
    scanf("%d",&n);
    
    printf("Los divisores del numero son: ");
    divisor = n;
    
    while (divisor>0) {
        if ((n%divisor) == 0)
            printf("%d\n",divisor);
        divisor--;
        
    }
        

 
    
    
    
 
    

return (EXIT_SUCCESS);
}

