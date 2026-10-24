/*Escribir un numero cualquiera e identificar en que rango se encuentra , 
si en la zona 1 : 0-20 , zona 2: 20-40 , zona 3: 40-n */

#include <stdio.h>

int main(void){

    float num;

    printf("Ingresa un numero:");
    scanf("%f",&num);

    if(num<=20){
        printf("\nEl numero se encuentra en la zona 1:");
    
    }
    else if (num>=21 && num<=40){
        printf("El numero se encuentra en la zona 2:");
    }
    else{
        printf("El numero se encuentra en la zona 3:");
    }

    return 0;
}