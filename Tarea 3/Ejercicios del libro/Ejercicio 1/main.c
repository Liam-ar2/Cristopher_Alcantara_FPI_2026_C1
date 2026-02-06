#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Ctrl_Ciclos;
    float salario_profesor, nomina_profesor;
    nomina_profesor = 0;

    for (Ctrl_Ciclos = 1; Ctrl_Ciclos <= 15; Ctrl_Ciclos++)
    {
        printf("\nIngrese el salario del profesor %d:\t", Ctrl_Ciclos);
        scanf("%f", &salario_profesor);
        nomina_profesor = nomina_profesor + salario_profesor;
    }

    printf("\nEl total de la nomina de los profesores es: %.2f\n", nomina_profesor);
    return 0;
}
