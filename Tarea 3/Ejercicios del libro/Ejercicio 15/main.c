#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int denominador_imp = 1, sum_rest = 0, valores_usados;
    double Resultado;

    Resultado = 4.0 / denominador_imp;
    valores_usados = 1;

    while (fabs(3.1415 - Resultado) > 0.0005)
    {
        denominador_imp += 2;

        if (sum_rest)
        {
            Resultado += 4.0 / denominador_imp;
            sum_rest = 0;
        }
        else
        {
            Resultado -= 4.0 / denominador_imp;
            sum_rest = 1;
        }

        valores_usados++;
    }

    printf("\nNumero de valores: %d\n", valores_usados);

    return 0;
}
