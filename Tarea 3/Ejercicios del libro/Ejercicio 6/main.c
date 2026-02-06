#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num_salarios = 0;
    float salario, promedio, suma_salarios = 0;

    printf("Ingrese el salario del profesor:\t");
    scanf("%f", &salario);

    do
    {
        suma_salarios = suma_salarios + salario;
        num_salarios = num_salarios + 1;

        printf("Ingrese el salario del profesor (-ingrese 0 para terminar para terminar el proceso-):\t");
        scanf("%f", &salario);
    }
    while (salario);

    promedio = suma_salarios / num_salarios;
    printf("\nNomina(suma de los salarios): %.2f \t Promedio de salarios: %.2f\n", suma_salarios, promedio);

    return 0;
}
