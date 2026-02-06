#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int numero;
    long Cuadrado_num, Cuadrados_suma = 0;

    printf("\nIngrese un numero entero -0 para terminar-:\t");
    scanf("%d", &numero);

    while (numero)
    {
        Cuadrado_num = numero * numero;
        printf("%d al cuadrado es %ld\n", numero, Cuadrado_num);
        Cuadrados_suma = Cuadrados_suma + Cuadrado_num;

        printf("\nIngrese un numero entero -0 para terminar-:\t");
        scanf("%d", &numero);
    }

     printf("\nLa suma de los cuadrados es: %ld\n", Cuadrados_suma);
        return 0;
}
