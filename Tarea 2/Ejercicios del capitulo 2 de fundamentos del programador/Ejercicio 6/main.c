#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int nivel_acdemico = 0;
    float salario = 0.0;

    printf("Ingrese el nivel acdemico del profesor: ");
    scanf("%d", &nivel_acdemico);

    printf("\nIngrese el salario del profesor: ");
    scanf("%f", &salario);

    switch(nivel_acdemico){
        case 1:
            salario = salario * 1.0035;
            break;

        case 2:
            salario = salario * 1.0041;
            break;

        case 3:
            salario = salario * 1.0048;
            break;

        case 4:
            salario = salario * 1.0053;
            break;
    }

    printf("\nEl nivel del profesor es: %d \nEl nuevo salario del profesor es: %.2f", nivel_acdemico,salario);

    return 0;
}
