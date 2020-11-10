
/* 
 * File:   serief.c
 * Author: Usuario
 *
 * Created on 9 de noviembre de 2020, 10:49 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

int num0 = 0, num1 = 1, hasta = 6;
while(num1 < hasta) {
num0 = num1 + num0;
num1 = num0 + num1;
printf("\n%d", num0 );
printf("\n%d", num1 );
}
return 0;
}




