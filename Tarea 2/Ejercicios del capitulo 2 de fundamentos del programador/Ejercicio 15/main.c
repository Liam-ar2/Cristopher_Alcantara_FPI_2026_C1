#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int tratamiento, nummero_de_dias, edad;
    float precio = 0.0;

    printf("Ingrese su tratamiento, edad y numero de dias: ");
    scanf("%d %d %d", &tratamiento, &edad, &nummero_de_dias);

    switch(tratamiento){

        case 1:
            precio = nummero_de_dias * 2800;
            break;

        case 2:
            precio = nummero_de_dias * 1950;
            break;

        case 3:
            precio = nummero_de_dias * 2500;
            break;

        case 4:
            precio = nummero_de_dias * 1500;
            break;

        default: precio = -1;
    }

    if(precio != -1){
        if(edad >= 60){
          precio = precio * 0.75;

        } else{
            if(edad <= 25){
                precio = precio * 0.85;
            }
        }

    } else {
        printf("Tratamiento incorrecto");
    }

    printf("\nEl tratamiento es: %d \nLos dias son: %d \nEl precio es: %.2f", tratamiento, nummero_de_dias, precio);
    return 0;
}
