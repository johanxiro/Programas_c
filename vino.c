/*ASOCIACION DE VITICULTORES TIENEN COMO POLÍTICA FIJAR UN PRECIO INICIAL 
AL KL DE UVA,LA CUAL SE CLASIFICA EN TIPOS A Y B , Y ADEMAS EN TAMAÑOS 1 Y 2 .
CUANDO SE REALIZA LA VENTA DEL PRODUCTO,ESTA ES DE UN SOLO TIPO Y TAMAÑO , 
SE REQUIERE DETERMINAR CUANTO RECIBIRÁ UN PRODUCTOR POR LA UVA QUE ENTREGA 
EN UN EMBARQUE CONSIDERANDO LO SIGUIENTE SI ES DE TIPO A, SE LE CARGA 2c AL
PRECIO INICIAL CUANDO ES DE TAMAÑO UNO Y 30 c SI ES DE TAMAÑO 2 
SI ES DE TIPO B, SE REBAJA 30 c CUANDO ES DE TAMAÑO UNO Y 50c CUANDO ES DE TAMAÑO 2.
REALICE UN PROGRAMA EN C PARA DETERMINAR 
LA GANANCIA OBTENIDA DE LA VENTA*/

#include <stdio.h>

int main(void){

    float pkl,kl ;
    char clasificacion;
    int tamaño;
    float cargo, venta;


    printf("CLASIFICACIÓN DEL TIPO DE UVA:\n");
    printf("[A] uvas verdes\n");
    printf("[B] Uvas moradas\n");
    scanf(" %c" , &clasificacion);
    printf("ClASIFICACIÓN EN TAMAÑOS:\n");
    printf("Seleccione el tamaño:\n");
    printf("[1] Tamaño grande\n");
    printf("[2] Tamaño mediano\n");
    scanf("%i",&tamaño);
    printf("¿Cual es el precio inicial del Kilo de uva?:\n");
    scanf("%f", &pkl);
    printf("¿Cuantos kilogramos de uva entregara al embarque?\n");
    scanf("%f", &kl);
    switch (clasificacion)
    {
    case 'a':
    case 'A':
        if (tamaño==1){
            cargo= (pkl+.02);
            venta= cargo * kl;
             printf("La venta del productor de la uva es de:%.2f\n",venta);
        }
        else if(tamaño == 2){
            cargo= (pkl+.30);
            venta= cargo * kl;
             printf("La venta del productor de la uva es de:%.2f\n",venta);
        }
        else{
            printf("Ingreso un dato mal, intentelo una vez mas\n");
        }
        break;

         //UVAS MORADAS , TIPO [B]//
    case 'b':
    case 'B':
        if (tamaño==1){
            cargo= (pkl-.30);
            venta= cargo * kl;
             printf("La venta del productor de la uva es de:%.2f\n",venta);
        }
        else if(tamaño == 2){
            cargo= (pkl-.50);
            venta= cargo * kl;
            printf("La venta del productor de la uva es de:%.2f\n",venta);
            
        }
        else{
            printf("Ingreso un dato mal, intentelo una vez mas\n");
        }
        break;

    
    default:
    printf("Ingreso una categoria no existente , intentelo de nuevo\n");
        break;
    }
    return 0;
}