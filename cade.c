
/* 
 * File:   cade.c
 * Author: Usuario
 *
 *
 */

#include <stdio.h>
#include <stdlib.h>
char texto[20];
char *p;
int contadores = 0;
/*
 * 
 */
int main(int argc, char** argv) {

    char texto[20];
    char *p;
    int espacios = 0; 
    int contadores = 0;
    
    
    printf("Introduzca una cadena de caracteres (20 letras maximo): ");
    gets(texto);
    
    p = texto;
    while (*p != '\0') {
        if (*p == ' ') espacios++;
        if (*p == 'a' || *p== 'b' || *p=='c' || *p=='d' || *p== 'e' || *p=='f' || *p=='g' || *p=='h' || *p=='i' || *p=='j' || *p=='k'
                || *p=='l' || *p=='m' || *p=='n' || *p=='o' || *p=='p' || *p=='q' || *p=='r' || *p=='s' || *p=='t' || *p=='u' || *p=='v'
                || *p=='w' || *p=='x' || *p=='y' || *p=='z') contadores++; 
       
      
        p++;
    }
    
    printf("En la cadena \"%s\" hay:\n",texto);
    printf(" %i espacios\n",espacios);
    printf(" %i letras del abecedario\n",contadores);




return (EXIT_SUCCESS);
}

