/*La langosta haumada es una empresa dedica a ofrecer
 banquetes ,sus tarifas son las siguientes :
 El costo del platillo por persona es de 95$ ,pero si el numero de personas
 es mayor a 200 pero Menor o igual a 300 , el costo es de 85$. 
 Para mas de 300 personas el costo del platillo es de 75$ 
 haga un programa en c que calcule el costo de un evento para n/personas*/

#include <stdio.h>

int main(void){
 int numero_p;
 int cuenta;
 printf("¿Cuantas personas asistieron al evento?:\n");
 scanf("%d",&numero_p);

    if (numero_p>1 && numero_p<=200){
        //Operaciones//
        cuenta= 95 * numero_p;
        printf("El costo del platillo es de $95.00\n");
        printf("La cuenta total del evento es :$%d\n",cuenta);
    }
    else if (numero_p>200 && numero_p<=300){
        cuenta= 85 * numero_p;
        printf("El costo del platillo es de $85.00\n");
        printf("La cuenta total del evento es :$%d\n",cuenta);
    }
    else if (numero_p>300){
        cuenta= 75 * numero_p;
        printf("El costo del platillo es de $75.00\n");
        printf("La cuenta total del evento es :$%d\n",cuenta);
    }
    printf("Fue una gran jornada laboral\n");
    return 0;

}

