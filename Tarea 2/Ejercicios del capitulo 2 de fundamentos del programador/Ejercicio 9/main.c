#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float resultado;
    int R, T, Q;
    printf("Ingrese el valor de R, T y Q:");
    scanf("%d %d %d", &R, &T, &Q);

    resultado = pow(R, 4) - pow(T, 3) + 4 * pow(Q, 2);

    if (resultado < 820) {
        printf("\nLa expresion se satisface.\n");
        printf("R = %d, T = %d, Q = %d\n", R, T, Q);
    } else {
        printf("\nNo satisface la exprexion.\n");
    }

return 0;
}
