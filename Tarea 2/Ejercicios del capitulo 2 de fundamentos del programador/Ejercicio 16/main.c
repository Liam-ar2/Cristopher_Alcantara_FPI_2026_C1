#include <stdio.h>
#include <stdlib.h>


int main()
{
    int clave_del_empleado, categoria_empleado, antiguedad_empleado, salida;

    printf("Ingrese su clave de empleado, categoria y antiguedad en el puesto: ");
    scanf("%d %d %d", &clave_del_empleado, &categoria_empleado, &antiguedad_empleado);

    switch(categoria_empleado){

        case 3:
        case 4:
            if(antiguedad_empleado >= 5){
                salida = 1;
            } else{
                salida = 0;
            }
            break;

        case 2:
            if(antiguedad_empleado >= 7){
               salida = 1;
            } else {
                salida = 0;
            }
            break;

        default: salida = 0;
        break;
    }

    if(salida == 1){
        printf("\nEl empleado con la clave de empleado: %d \nCumple con las condiciones para el puesto.", clave_del_empleado);
    } else {
        printf("\nEl empleado con la clave de empleado: %d \nNo cumple con las condiciones para el puesto.",clave_del_empleado);
    }
    return 0;
}
