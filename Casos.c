/*Programa de un menu de pizzas haciendo uso de Switch*/

#include <stdio.h>

int main(void){
    
    int opcion;
    
    
    printf("[1].-Pizza sencilla\n");
    printf("[2].-Pizza mediana\n");
    printf("[3].-Pizza familia\n");
    printf("[4].-Pizza peperoni\n");
    printf("Ingresa que pizza desea:");
    scanf("%i",&opcion);
    switch(opcion){
        case 1:
            printf("[1].-Pizza sencilla\n");
            printf("$120:");
            break;
        case 2:
            printf("[2].-Pizza mediana\n");
            printf("$150:");
            break;
        case 3:
            printf("[2].-Pizza familia\n");
            printf("$180:");
            break;
        case 4:
            printf("[2].-Pizza peperoni\n");
            printf("$250:");
            break;
        default:
            printf("La opcion ingresa no es valida ");
        }
        printf("Gracias por su compra:");
    return 0;
}