/*Una compañia de viajes cuenta con tres tipos de autobuses a , b y c , cada una
tiene un precio por km recorrido por persona , los costos respectivos son:$2.00 , $2.50
 y $3.00, se requiere determinar el costo total y por persona del viaje, considerando que
 cuando este se presupuesta debe haber un minimo de 20 personas , de lo contrario
 el cobro se realiza con base a este numero limite*/
#include <stdio.h>

int main(void) {
    char autobus;
    int Km;
    int nmp;
    float cosT;
    float pagP;
    int viaje;

    printf("¿Cuantos kilometros viajara?:\n");
    scanf("%i", &Km);

    printf("Seleccione el autobus para su destino:\n");
    printf("[a] Autobus A, $2.00 por kilometro\n");
    printf("[b] Autobus B, $2.50 por kilometro\n");
    printf("[c] Autobus C, $3.00 por kilometro\n");
    scanf(" %c", &autobus);

    switch (autobus) {
        case 'a':
            printf("¿Cuantos pasajeros estan abordo?:\n");
            scanf("%i", &nmp);

            if (nmp >= 20) {
                viaje = 2 * Km;
                cosT = viaje * nmp;
                pagP = cosT / 20;
                printf("El costo total del viaje es: $%.2f\n", cosT);
                printf("El pago por persona es: $%.2f\n", pagP);
            }
            else if (nmp < 20 && nmp > 0) {
                viaje = 2 * Km;
                cosT = viaje * nmp;
                pagP = cosT / nmp;
                printf("El costo total de tu viaje es: $%.2f\n", cosT);
                printf("El pago por persona es: $%.2f\n", pagP);
            }
            break;

        case 'b':
            printf("¿Cuantos pasajeros estan abordo?:\n");
            scanf("%i", &nmp);

            if (nmp >= 20) {
                cosT = 2.50 * Km * nmp;
                pagP = cosT / 20;
                printf("El costo total del viaje es: $%.2f\n", cosT);
                printf("El pago por persona es: $%.2f\n", pagP);
            }
            else if (nmp < 20 && nmp > 0) {
                cosT = 2.50 * Km * nmp;
                pagP = cosT / nmp;
                printf("El costo total de tu viaje es: $%.2f\n", cosT);
                printf("El pago por persona es: $%.2f\n", pagP);
            }
            break;

        case 'c':
            printf("¿Cuantos pasajeros estan abordo?:\n");
            scanf("%i", &nmp);

            if (nmp >= 20) {
                cosT = 3 * Km * nmp;
                pagP = cosT / 20;
                printf("El costo total del viaje es: $%.2f\n", cosT);
                printf("El pago por persona es: $%.2f\n", pagP);
            }
            else if (nmp < 20 && nmp > 0) {
                cosT = 3 * Km * nmp;
                pagP = cosT / nmp;
                printf("El costo total de tu viaje es: $%.2f\n", cosT);
                printf("El pago por persona es: $%.2f\n", pagP);
            }
            break;

        default:
            printf("Ingresaste un dato mal\n");
            break;
    }

    printf("GRACIAS POR CONFIAR EN NOSOTROS\n");

    return 0;
}
