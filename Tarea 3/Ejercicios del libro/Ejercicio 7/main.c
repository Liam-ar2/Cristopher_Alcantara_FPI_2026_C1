#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int Ctrl_ciclos, numero_lanzamientos;
    float distancia_lanzamiento, sum_pro_lanzamientos = 0;

    do
    {
        printf("Ingrese el numero de lanzamientos:\t");
        scanf("%d", &numero_lanzamientos);
    }

    while (numero_lanzamientos < 1 || numero_lanzamientos > 11);

    for (Ctrl_ciclos=1; Ctrl_ciclos<=numero_lanzamientos; Ctrl_ciclos++)
    {
        printf("\nIngrese el lanzamiento %d: ", Ctrl_ciclos);
        scanf("%f", &distancia_lanzamiento);

        sum_pro_lanzamientos = sum_pro_lanzamientos + distancia_lanzamiento;
    }

    sum_pro_lanzamientos = sum_pro_lanzamientos / numero_lanzamientos;
    printf("\nEl promedio de lanzamientos es: %.2f\n", sum_pro_lanzamientos);

    return 0;
}
