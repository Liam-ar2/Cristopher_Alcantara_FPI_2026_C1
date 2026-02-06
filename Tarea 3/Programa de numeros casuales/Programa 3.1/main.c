#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 3
#define NUM_MAX 31

int main(void)
{
    int i;
    int a[ARRAY_SIZE];
    int Numeros_jugados[ARRAY_SIZE];
    int Premios = 0;
    int Cantidad_numeros;

    for (i = 0; i < ARRAY_SIZE; i++)
    {
        printf("Ingrese el numero %d (entre 10-40): ", i + 1);
        scanf("%d", &Numeros_jugados[i]);
    }

    srand(time(NULL));

    Cantidad_numeros = ARRAY_SIZE;

    for (i = 0; i < Cantidad_numeros; i++)
    {
        a[i] = rand() % NUM_MAX + 10;
    }

    printf("\nNumeros generados: ");

    for (i = 0; i < Cantidad_numeros; i++)
    {
        printf("%d ", a[i]);
    }

    for (i = 0; i < Cantidad_numeros; i++)
    {
        for (int j = 0; j < Cantidad_numeros; j++)
        {
            if (Numeros_jugados[i] == a[j])
            {
                Premios++;
                break;
            }
        }
    }
    if (Premios == 3)
        printf("\nAdivinaste los 3 numeros\n");
    else if (Premios == 2)
        printf("\nAdivinaste 2 numeros\n");
    else if (Premios == 1)
        printf("\nAdivinaste 1 numero\n");
    else
        printf("\nNo hubo premio\n");

    return 0;
}

