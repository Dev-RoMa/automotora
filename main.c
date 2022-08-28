#include <stdio.h>
#include <stdlib.h>
/*  si es inferior a 20,000 km y su consumo inferior
a 5 l/100 km incrementar el precio en 20%;
    si es superior a 20,000 km y su consumo igual
o inferior a 5 l/100 km incrementar el precio en un 10%
    si el consumo es superior a 5 l/100km, incrementar
el precio base en un 5%*/


int main()
{
    //variables
    int kmr;
    int preciov;
    int preciot;
    float rend;

    //codigo
    printf(" --- automotora --- \n");
    printf(" Ingrese el precio del vehiculo = ");
    scanf("%d", &preciov);
    printf("\n");
    printf(" el precio del vehiculo es = %d", preciov);

    printf(" Ingrese los kilometros recorridos = ");
    scanf("%d", &kmr);
    printf("\n");
    printf(" los kilometros recorridos son = %d \n", kmr);

    printf(" Ingrese el rendimiento de combustible = ");
    scanf("%f", &rend);
    printf("\n");
    printf(" El rendimiento del combustible es %.2f \n", rend);

    /*  si es inferior a 20,000 km y su consumo inferior
a 5 l/100 km incrementar el precio en 20% */

    if (kmr < 20000 && rend < 5 ) {
            preciov = preciov * 1.2;
            printf(" el precio del vehiculo es %d", preciov);
    }
    /*si es superior a 20,000 km y su consumo igual
o inferior a 5 l/100 km incrementar el precio en un 10%*/

        else if (kmr > 20000 && rend <= 5 ) {
            preciov = preciov * 1.1;
            printf(" el precio del vehiculo es %d", preciov);
        }

    /* si el consumo es superior a 5 l/100km, incrementar
el precio base en un 5%*/
        else if (rend > 5 ) {
            preciov = preciov * 1.1;
            printf(" el precio del vehiculo es %d", preciov);
        }
printf("\n-------------------------\n");
printf(" \---fin del programa ---/ ");
printf("\n-------------------------\n");
}
