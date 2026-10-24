/*Escriba un programa en c que lea un numero cualquiera
e imprima el numero como salida cuando tome valores mayores a 10*/

#include <stdio.h>

//Defino el tipo de variable//
float num;
int main(vold){

    printf("introduce un numero:");
    scanf("%f",&num);

    if(num>10){

        printf("\nLa condicion se cumplio , el numero es",num ,"y es mayor a 10");
    }

    return 0;
}
