/*Una tienda tiene un programa que determina si un cliente recibe un descuento

Reglas: 
1.solo si compra mas de $500  y  si tiene una tarjeta de ahorro, recibe el descuento
2.Si compra $500 o menos , o no tiene tarjeta , no recibe el descuento*/

#include <stdio.h>
int main(void){
    float totalCom;
    int tarjeta ;


    printf("¿Tiene tarjeta de ahorro el cliente?: SI (1) O NO (0)");
    scanf("%i",&tarjeta);
    printf("Ingresa el total de la compra del cliente:");
    scanf("%.2f",&totalCom);
    

    if(totalCom > 500 && tarjeta == 1 ) {
        printf("Se aplico un descuento\n");
    }
    else if (totalCom <= 500 || tarjeta == 0 ) {
        printf("No aplica el descuento\n");
    }

    return 0;

}