#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int Numero_positivo;


    printf("Ingrese un numero para calcular la serie de ULAM: ");
    scanf("%d", &Numero_positivo);

    if (Numero_positivo > 0)
    {

        printf("\nSerie de ULAM\n");
        printf("%d\t", Numero_positivo);

    while (Numero_positivo != 1)
    {
    if (pow(-1, Numero_positivo) > 0)
        Numero_positivo = Numero_positivo / 2;
    else
        Numero_positivo = Numero_positivo * 3 + 1;
        printf("%d\t", Numero_positivo);
    }
    }
    else
    {
        printf("\n El numero debe ser un entero positivo");
    }

    return 0;
}
