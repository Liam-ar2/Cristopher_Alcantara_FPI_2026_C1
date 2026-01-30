#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* actualice el codigo para que me traiga el 18%(itbis) si el precio es menor que 1500*/

int main()
{
    float precio = 0.0;
    float nuevoprecio = 0.0;

    printf("Ingrese el precio: ");
    scanf("%f", &precio);

    if(precio < 1500){
        nuevoprecio = (precio * 0.18) + precio;
        printf("\nEl nuevo precio es: %.2f", nuevoprecio);
    } else{
        printf("\nEl precio es: %.2f", precio);
    }

    return 0;
}
