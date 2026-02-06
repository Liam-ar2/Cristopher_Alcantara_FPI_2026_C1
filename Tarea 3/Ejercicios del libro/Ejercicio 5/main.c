#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float pago, suma_pagos = 0;

    printf("Ingrese el primer pago del mes:\t");
    scanf("%f", &pago);

    do
    {
        suma_pagos = suma_pagos + pago;
        printf("Ingrese el siguiente pago (-ingrese 0 para terminar para terminar el proceso-):\t");
        scanf("%f", &pago);
    }

    while (pago);

    printf("\nEl total de pagos realizados en el mes es de: %.2f\n", suma_pagos);
    return 0;
}
