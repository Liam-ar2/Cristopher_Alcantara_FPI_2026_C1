#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pago, suma_pagos;
    suma_pagos = 0;

    printf("Ingrese el primer pago del ultimo mes:\t");
    scanf("%f", &pago);

    while (pago)
    {
        suma_pagos = suma_pagos + pago;
        printf("Ingrese el siguiente pago(Ingresar el numero 0 para terminar el proceso):\t");
        scanf("%f", &pago);
    }

    printf("\nEl total de pagos realizados en el mes es: %.2f\n", suma_pagos);
    return 0;
}
