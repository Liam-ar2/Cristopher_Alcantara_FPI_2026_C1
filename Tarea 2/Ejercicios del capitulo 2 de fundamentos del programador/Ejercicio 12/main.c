#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int Valor_de_T, Valor_de_P, Valor_de_N;

    printf("Escribea 3 numeros: ");
    scanf("%d %d %d", &Valor_de_T, &Valor_de_P, &Valor_de_N);

    if(Valor_de_P != 0){
        if(pow((Valor_de_T/Valor_de_P), Valor_de_N) == pow(Valor_de_T,Valor_de_N)/pow(Valor_de_P,Valor_de_N)){
            printf("Se comprueba la igualdad");
        }else {
            printf("No se comprueba la igualdad");
        }

    } else {
        printf("\nEl segundo numero debe ser diferente de 0");
    }

    return 0;
}
