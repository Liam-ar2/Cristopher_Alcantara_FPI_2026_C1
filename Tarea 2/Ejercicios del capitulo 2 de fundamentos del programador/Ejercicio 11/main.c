#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int distancia, tiempo;
    float costo;

    printf("Ingrese la distancia y el tiempo: ");
    scanf("%d %d", &distancia, &tiempo);

    if(distancia * 2 > 500 && tiempo > 10){
        costo = ((distancia * 2)* 0.19) * 0.80;
    } else {
        costo = (distancia * 2) * 0.19;
    }

    printf("El costo es de %.2f", costo );
    return 0;
}
