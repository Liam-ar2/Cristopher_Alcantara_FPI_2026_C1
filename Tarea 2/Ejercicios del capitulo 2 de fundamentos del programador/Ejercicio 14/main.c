#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int clave, tiempo;
    float precio;

    printf("Introduzca la clave y el tiempo: ");
    scanf("%d %d", &clave, &tiempo);

    switch(clave){

    case 1:
        precio = (tiempo * 0.13)/60;
        break;

    case 2:
        precio = (tiempo * 0.11)/60;
        break;

    case 5:
        precio = (tiempo * 0.22)/60;
        break;

    case 6:
        precio = (tiempo * 0.19)/60;
        break;

    case 7:
    case 9:
        precio = (tiempo * 0.17)/60;
        break;

    case 10:
        precio = (tiempo * 0.20)/60;
        break;

    case 15:
        precio = (tiempo * 0.39)/60;
        break;

    case 20:
        precio = (tiempo * 0.28)/60;
        break;

    default: precio = -1;
    }

    if(precio != -1){
       printf("\nLa clave es: %d \nEl tiempo es: %d \nEl precio es: %.2f", clave, tiempo, precio);
    } else {
        printf("\nLa clave esta incorrecta.");
    }

    return 0;
}
