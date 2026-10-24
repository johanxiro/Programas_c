/*Hacer un programa en c que evalue si un usuario puede
acceder a la sala de cine con base a su edad y pidiendole al usuario su edad  y establecer
la edad minima */

#include<stdio.h>

int main(void){

    int edad ,edadm;

    printf("Ingresa la edad del usuario:");
    scanf("%d",&edad);
    printf("Ingresa la edad minima:");
    scanf("%d",&edadm);
    if(edad>=edadm){
        printf("Tienes acceso a la sala de cine");
    }
    else {
        printf("No tienes acceso a la sala de cine");
    }
    return 0;
}