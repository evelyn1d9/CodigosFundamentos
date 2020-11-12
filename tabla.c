
/* 
 * File:   tabla.c
 * Author: Usuario
 *
 * Created on 12 de noviembre de 2020, 01:52 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int i = 0;
    while (i<10) {
        int j=0;
        while (j<10) {
            printf ("%d x %d es %d",i,j,(i*j));
            j++;
        }
        i++;
               
        }




    return 0;
}






