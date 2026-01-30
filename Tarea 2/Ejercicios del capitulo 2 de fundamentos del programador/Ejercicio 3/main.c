#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float promedio = 0.0;

    printf("Ingrese su promedio: ");
    scanf("%f", &promedio);

    if(promedio >= 6){
        printf("\nUsted ha probado");
    } else {
        printf("\nUsted ha Reprobado");
    }

    return 0;
}
