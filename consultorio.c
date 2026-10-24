/*: El consultorio del Dr. Lorenzo T. Mata Lozano tiene como polıtica
cobrar la consulta con base en el numero de cita,
de la siguiente forma:
Las tres primeras citas a $200.00 c/u.
Las siguientes dos citas a $150.00 c/u.
Las tres siguientes citas a $100.00 c/u.
Las restantes a $50.00 c/u, mientras dure el tratamiento.
Se requiere un algoritmo para determinar:
(a) Cuanto pagara el paciente por la cita. 
(b) El monto de lo que ha pagado el paciente por el tratamiento.*/

#include<stdio.h>
int main(void){
    int pagocita;
    int numcita;
    int costo1,costo2,costo3,costoR;
    int x;
    costo1 = 200;
    costo2 = 150;
    costo3 = 100;
    costoR= 50;

    printf("Ingresa el numero de citas requeridas:\n");
    scanf("%d",&numcita);
    if (numcita==1 ||numcita<4){
        pagocita =  costo1 *numcita;
        printf("Estaras pagando por cita:$%d\n",costo1);
        printf("Tu monto total de tu tratamiento es:$%d\n",pagocita);
    }
    else if(numcita==4 && numcita<6){
        x = numcita -3 ;
        pagocita = (costo1*3)+(costo2*x);
        printf("El cobro de tus tres primeras citas sera de:$%d\n",costo1);
        printf("Mientras que el resto sera de:$%d\n",costo2);
        printf("Tu monto total de tu tratamiento es:$%d\n",pagocita);

    }
    else if(numcita==6 || numcita<9){
        x = numcita - 5 ;
        pagocita = (costo1*3)+(costo2*2)+(costo3* x);
        printf("El cobro de tus tres primeras citas sera de:$%d\n",costo1);
        printf("Mientras que las dos siguientes sera de:$%d\n",costo2);
        printf("El resto solo se te cobraran al precio de:$%d\n",costo3);
        printf("Tu monto total de tu tratamiento es:$%d\n",pagocita);
    }
    else {
        x = numcita - 8 ;
        pagocita = (costo1*3)+(costo2*2)+(costo3* 3)+(costoR*x);
        printf("El cobro de tus tres primeras citas sera de:$%d\n",costo1);
        printf("Mientras que las dos siguientes sera de:$%d\n",costo2);
        printf("Posteriormente de las 2 citas , las tres siguientes se te cobrara a:$%d\n",costo3);
        printf("El resto solo se te cobrara  al precio de:$%d\n",costoR);
        printf("Tu monto total de tu tratamiento es:$%d\n",pagocita);
    }
    printf("GRACIAS POR SU CONSULTA , VUELVA PRONTO\n");
    return 0;
}