#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int numero;

    printf("Ingresae un numero: ");
    scanf("%d", &numero);

    if(numero == 0){
        printf("\nEl Numero es Nulo");
    } else {
        if(numero % 2 == 0){
           printf("Es un Numero Par");
        } else {
            printf("Es un Numero Impar");
        }
    }
    return 0;
}
