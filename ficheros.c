
/* 
 * File:   ficheros.c
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
    
    int num[3], x;
    double media;
    
    for(x=0; x<3; x++) {
        printf("Introduzca un numero entero: ");
        scanf("%d",&num[x]);
        
    }
    
    media = (num[0]+num[1]+num[2]/3.0);
    
    FILE*fichero;
    fichero = fopen("dato,txt","wt");
    fprintf(fichero,"%d\n%d\n%d\n1f",num[0], num[1], num[2], media);
    fclose(fichero);
    
    printf("Proceso completo");
    
    


return (0);
}

