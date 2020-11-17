
/* 
 * File:   for.c
 * Author: Usuario
 *
 * Created on 16 de noviembre de 2020, 09:06 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int x = 1;
    int y = 1;
    
    for (x = 1; x <= 10;) {
        for (y = 1; y <=10;) {
            printf("%d X %d = %d\n",x,y,(x*y));
           
            y = y + 1;
        }
       x = x + 1;    
    }

    return 0;
}








