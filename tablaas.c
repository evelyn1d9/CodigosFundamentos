
/* 
 * File:   tablaas.c
 * Author: Usuario
 *
 * Created on 11 de noviembre de 2020, 10:31 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    
    int x = 1; 
    
    
    while (x<=10) {
        
        int y = 1;
        
        while (y<=10) {
            printf("%d X %d = %d\n",x,y,(x*y));
           
            y = y + 1;
        }
        x = x + 1;
     }
    
        
        
 
 return 0;
    
    
}