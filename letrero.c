
#include <stdio.h>

int main(void){
    int entero;
    float flotante;
    char caracter;
 
    printf("Escribe un numero entero:");
    scanf("%d", &entero);
    printf("Escribe un numero Flotante:");
    scanf("%f", &flotante);
    printf("Escribe un caracter:");
    scanf(" %c", &caracter);
    
    printf("Entero:%d\n",entero);
    printf("Flotante:%.2f\n",flotante);
    printf("Caracter:%c\n",caracter);

    return 0;
}