#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int Ctrl_ciclo, numero;
    long factorial;

    printf("\nIngrese el numero: ");
    scanf("%d", &numero);

    if (numero >= 0)
    {
        factorial = 1;

        for (Ctrl_ciclo = 1; Ctrl_ciclo <= numero; Ctrl_ciclo++)
        {
            factorial *= Ctrl_ciclo;
        }

        printf("\nEl factorial de %d es: %ld\n", numero, factorial);
    }
    else
    {
        printf("\nError en el numero ingresado\n");
    }

    return 0;
}



