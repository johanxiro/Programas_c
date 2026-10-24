/*Hacer un programa en c que evalue si un usuario puede
acceder a la sala de cine con base a su edad*/

#include<stdio.h>

int main(void){

    int edad , r;
    r=13;

    printf("Ingresa la edad del usuario:");
    scanf("%d",&edad);

    if(edad>=r){
        printf("Tienes acceso a la sala de cine");
    }
    else {
        printf("No tienes acceso a la sala de cine");
    }
    return 0;
}