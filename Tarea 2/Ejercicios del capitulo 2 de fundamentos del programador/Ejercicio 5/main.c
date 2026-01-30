#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int opcion, numero;
    float resultado;

    printf("Ingrese la opcion y el numero: ");
    scanf("%d %d", &opcion, &numero);

    switch(opcion){
        case 1:
            resultado = (resultado/5);
            break;

        case 2:
            resultado = pow(numero,numero);
            break;

        case 3:
        case 4:
            resultado = 6 * numero/2;
            break;

        default: resultado = 1.0;
            break;
    }
    printf("\nEl resultado es: %7.2f", resultado);

    return 0;
}
