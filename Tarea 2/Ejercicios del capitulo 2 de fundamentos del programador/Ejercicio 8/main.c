#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int carrera, matricula, semestre;
    float promedio;

    printf("Ingrese su carrera (1-Industrial 2-Telematica 3-Computacion 4-Mecanica): ");
    scanf("%d", &carrera);

    printf("Ingrese su matricula: ");
    scanf("%d", &matricula);

    printf("Ingrese su semestre y promedio: ");
    scanf("%d %f", &semestre, &promedio);

    switch(carrera){
        case 1:
            if(semestre >= 6 && promedio > 8.5){
                printf("\nMatricula: %d \nCarrera: %d \nPromedio: %.2f", matricula, carrera, promedio);
            }
        break;

        case 2:
            if(semestre >= 5 && promedio > 9.0){
                printf("\nMatricula: %d \nCarrera: %d \nPromedio: %.2f", matricula, carrera, promedio);
            }
        break;

        case 3:
            if(semestre >= 6 && promedio > 8.8){
                printf("\nMatricula: %d \nCarrera: %d \nPromedio: %.2f", matricula, carrera, promedio);
            }
        break;

        case 4:
            if(semestre >= 7 && promedio > 9.0){
                printf("\nMatricula: %d \nCarrera: %d \nPromedio: %.2f", matricula, carrera, promedio);
            }
        break;

        default: printf("Error en la carrera");
        break;
    }

    return 0;
}
