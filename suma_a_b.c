/*Hacer un programa en c que calcule la suma , resta , multiplicacion de dos
numeros cualquiera*/


#include <stdio.h>

int main(void){
  

float a , b;
float suma , resta , multiplicacion , division;

    printf("Introduce un numero:");
    scanf("%f",&a);
    printf("Introduce un segundo numero:");
    scanf("%f",&b);
    suma= a+ b;
    resta= a-b;
    multiplicacion = a*b;
    division = a/b;

    printf("\nLa suma es de: %.2f",suma);
    printf("\nLa resta es de:%.2f",resta);
    printf("\nla multiplicacion es de:%.2f",multiplicacion);
    printf("\nLa division es de:%.2f",division);

    return 0;
}