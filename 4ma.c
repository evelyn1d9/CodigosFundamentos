
/* 
 * File:   4ma.c
 * Author: Usuario
 *
 * Created on 7 de noviembre de 2020, 11:17 PM
 */

#include <stdio.h>
#include <stdlib.h>

/* 
 * 
 */
int main(int argc, char** argv) {
    
    float a = 14;
    float b = 40;
    float c = 32;
    float d = 97;
    
    if (a>b && a>c && a>d) {
        printf("a es mayor,a");
    } else
        if (b>a && b>c && b>d) {
            printf("b es mayor,b");
        } else
            if (c>a && c>b && c>d) {
                printf("c es mayor,c");
            } else
                printf("d es mayor,d");
        
                
   
             
   return 0; 

}
       
    
    
    






