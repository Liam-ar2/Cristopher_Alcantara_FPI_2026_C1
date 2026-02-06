#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int incrementar_valor = 2, valor_sumar = 1;
    long suma_serie = 0;

    while (incrementar_valor <= 1000)
    {
        suma_serie = suma_serie + incrementar_valor;
        printf("\t %d", incrementar_valor);

        if (valor_sumar)
        {
            incrementar_valor += 5;
            valor_sumar--;
        }
        else
        {
            incrementar_valor += 3;
            valor_sumar++;
        }
    }

    printf("\nLa suma de la serie es: %ld\n", suma_serie);

    return 0;
}
