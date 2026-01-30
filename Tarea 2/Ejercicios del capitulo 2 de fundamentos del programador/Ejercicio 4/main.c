#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int opcion;

    printf("Ingrese un numero (1-3): ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            printf("Selecciono el 1\n");
            break;

        case 2:
            printf("Selecciono el 2\n");
            break;

        case 3:
            printf("Selecciono el 3\n");
            break;

        default:
            printf("Opcion no valida\n");
    }

    return 0;
}
