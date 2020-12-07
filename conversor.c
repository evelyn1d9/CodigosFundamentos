
/* 
 * File:   conversor.c
 * Author: Usuario
 *
 * 
 */

#include <stdio.h>
#include <stdlib.h>

void verificar (int);
void conCaF();
void conCaK();
void conFaC();
void conFaK();
void conKaC();
void conKaF();



/*
 * 
 */
int main(int argc, char** argv) {

    int opc;
    
    do {
        opc = 0;
        system("cmd /c cls");
        printf("Selecciona una opcion:\n");
        printf("1 - Convertir C a F\n");
        printf("2 - Convertir C a K\n");
        printf("3 - Convertir F a C\n");
        printf("4 - Convertir F a K\n");
        printf("5 - Convertir K a C\n");
        printf("6 - Convertir K a F\n");
        printf("7 - Salir\n");
        printf("Seleccion: ");
        scanf("%d",&opc);
        
        //verifica opc 
        verificar(opc);

        
     }
    while (opc != 7);
    



return (EXIT_SUCCESS);
}

void verificar (int opc){
    switch (opc){
        case 1 :{
            conCaF();
            break;
           }
        case 2 :{
            conCaK();
            break;
           }
        case 3 :{
            conFaC();
            break;
           }
        case 4 :{
            conFaK();
            break;
           }
        case 5 :{
            conKaC();
            break;
           }
        case 6 :{
            conKaF();
            break;
           }
         case 7 :{
            printf("salir\n");
            break;
         }
         default :{
            printf("caso defecto\n");
            break;
         }
    }
    
    
}

void conCaF(){
    printf("\nIngrese los grados en C: ");
    float c = 0;
    scanf("%f",&c);
    float f = c * 1.8 + 32;
    printf("\nLos grados F son: %f  \n",f);
    system("cmd /c pause");
}
void conCaK(){
    printf("\nIngrese los grados en C: ");
    float c = 0;
    scanf("%f",&c);
    float k = c + 273.15;
    printf("\nLos grados K son: %f  \n",k);
    system("cmd /c pause");
}
void conFaC(){
    printf("\nIngrese los grados en F: ");
    float f = 0;
    scanf("%f",&f);
    float c = f - 32 * 1.8000;
    printf("\nLos grados C son: %f  \n",c);
    system("cmd /c pause");
    
              }

void conFaK(){
    printf("\nIngrese los grados en F: ");
    float f = 0;
    scanf("%f",&f);
    float k = (f - 32) * 1.800 + 273.15;
    printf("\nLos grados K son: %f  \n",k);
    system("cmd /c pause");
}
void conKaC(){
    printf("\nIngrese los grados en K: ");
    float k = 0;
    scanf("%f",&k);
    float c = k - 273.15;
    printf("\nLos grados F son: %f  \n",c);
    system("cmd /c pause");
}
void conKaF(){
    printf("\nIngrese los grados en K: ");
    float k = 0;
    scanf("%f",&k);
    float f = (k -273.15)*1.8000 + 32;
    printf("\nLos grados F son: %f  \n",f);
    system("cmd /c pause");
}