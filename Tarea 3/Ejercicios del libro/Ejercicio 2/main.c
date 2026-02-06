#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Contador_Ciclos, Cantidad_num, numero, suma;
    suma = 0;

    printf("Ingrese la cantidad de numeros para sumar:\t");
    scanf("%d", &Cantidad_num);

    for (Contador_Ciclos = 1; Contador_Ciclos <= Cantidad_num; Contador_Ciclos++)
    {
        printf("Ingrese el numero %d:\t", Contador_Ciclos);
        scanf("%d", &numero);

        if (numero > 0)
        {
            suma = suma + numero;
        }
    }

    printf("\nLa suma de los numeros es: %d\n", suma);
    return 0;
}
