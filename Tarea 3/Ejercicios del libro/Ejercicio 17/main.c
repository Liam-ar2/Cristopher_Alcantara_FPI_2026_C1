#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Ctrl_ciclo, divisores_posibles, numero_limite, suma_divisores, limite_intervalo = 0;

    printf("\nIngrese el numero limite: ");
    scanf("%d", &numero_limite);

    for (Ctrl_ciclo = 1; Ctrl_ciclo<= numero_limite; Ctrl_ciclo++)
    {
        suma_divisores = 0;

        for (divisores_posibles = 1; divisores_posibles <= (Ctrl_ciclo / 2); divisores_posibles++)
        {
            if ((Ctrl_ciclo % divisores_posibles) == 0)
                suma_divisores += divisores_posibles;
        }

        if (suma_divisores == Ctrl_ciclo)
        {
            printf("\n%d es un numero perfecto", Ctrl_ciclo);
            limite_intervalo++;
        }
    }

    printf("\nEntre 1 y %d hay %d numeros perfectos\n", numero_limite, limite_intervalo);

    return 0;
}

