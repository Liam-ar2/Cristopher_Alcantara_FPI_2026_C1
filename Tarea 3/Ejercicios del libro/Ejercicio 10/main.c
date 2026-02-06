#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int Ctrl_ciclos, Cantidad_num, numero, Suma_pares = 0, Suma_impares = 0, Cantidad_impares = 0;

    printf("Ingrese el numero de datos que se van a utilizar:\t");
    scanf("%d", &Cantidad_num);

    if (Cantidad_num > 0)
    {
        for (Ctrl_ciclos=1; Ctrl_ciclos <= Cantidad_num; Ctrl_ciclos++)
                   {
                    printf("\nIngrese un numero %d: ", Ctrl_ciclos);
                    scanf("%d", &numero);

                    if (numero)
                        if (pow(-1, numero) > 0)
                        Suma_pares = Suma_pares + numero;

                        else
                            {
                                Suma_impares = Suma_impares + numero;
                                Cantidad_impares++;
                            }
                    }
                    printf("\nLa suma de los numeros pares es: %d", Suma_pares);
                    printf("\nEl promedio de los numeros impares es: %.2f\n", (float)Suma_impares / Cantidad_impares);
    }
            else
            {
                printf("\nEl valor del numero es incorrecto\n");
            }

    return 0;
}


