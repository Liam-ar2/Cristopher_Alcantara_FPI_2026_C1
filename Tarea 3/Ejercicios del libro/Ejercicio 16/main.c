#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Ctrl_ciclo, Matricula, Matricula_mayor_prom = 0, Matricula_menor_prom = 0;
    float Suma_calificaciones, promedio_alumno_actual, Calificacion, Mejor_promedio = 0.0, Peor_romedio = 11.0;

    printf("Ingrese la matricula del alumno:\t");
    scanf("%d", &Matricula);

    while (Matricula != 0)
    {
        Suma_calificaciones = 0;

        for (Ctrl_ciclo = 1; Ctrl_ciclo<=5; Ctrl_ciclo++)
        {
            printf("\tIngrese la calificacion %d del alumno: ", Ctrl_ciclo);
            scanf("%f", &Calificacion);
            Suma_calificaciones += Calificacion;
        }

        promedio_alumno_actual = Suma_calificaciones / 5;

        printf("\nMatricula: %d\tPromedio: %.2f\n", Matricula, promedio_alumno_actual);

        if (promedio_alumno_actual > Mejor_promedio)
        {
            Mejor_promedio = promedio_alumno_actual;
            Matricula_mayor_prom = Matricula;
        }

        if (promedio_alumno_actual < Peor_romedio)
        {
            Peor_romedio = promedio_alumno_actual;
            Matricula_menor_prom = Matricula;
        }

        printf("\nIngrese la matricula del siguiente alumno (-ingrese 0 para terminar para terminar el proceso-): ");
        scanf("%d", &Matricula);
    }

    if (Matricula_mayor_prom != 0)
    {
        printf("\nAlumno con mejor promedio:\t%d\t%.2f\n", Matricula_mayor_prom, Mejor_promedio);
        printf("Alumno con peor promedio:\t%d\t%.2f\n", Matricula_menor_prom, Peor_romedio);
    }
    else
    {
        printf("\nNo se ingresaron alumnos.\n");
    }

    return 0;
}
