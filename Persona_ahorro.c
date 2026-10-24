/*una persona ahorra el 15% de su salario semanal , el 20% paga productos y servicios y el 50%
de comida y el 15% diversion , haga un programa en c que indique cuanto destino a cada rubio despues de 1 mes*/

#include <stdio.h>

int main(void){
    float ahorro_mes; //Variable que calcula el monto total ahorrado en un mes//
    float s ; //Variable que almacena el sueldo semanal del trabajador o persona//
    float a,b,c,d; //Variables que surten los gastos en distintas actividades//
    //DATO DE ENTRADA//
    printf("Introduce el salario semanal del trabajador:");
    scanf("%f",&s);
    //PROCESO//
    //OPERACIONES//
    ahorro_mes= s * 4; //4 Semanas que posee un mes//
    a= ahorro_mes*.15 ; //Este apartado es el ahorro de la persona//
    b= ahorro_mes*.20; //Este apartado es el gasto total en productos y servicios//
    c= ahorro_mes*.50; //Este apartado son sus gastos totales en comida//
    d= ahorro_mes*.15; //Este apartado son los gastos en diversion de la persona//
    //IMPRESIONES DE SALIDA//
    printf("\nEl ahorro que acumulo de su salario semanal durante un mes es:$%f",a);
    printf("\nLos gastos totales que llevo en productos y servicios durante un mes fue:$%f",b);
    printf("\nLos gastos en alimentos y comidas durante el mes fue:$%f",c);
    printf("\nEl total gastado en diversion durante un mes fue:$%f",d);

    return 0;

}

