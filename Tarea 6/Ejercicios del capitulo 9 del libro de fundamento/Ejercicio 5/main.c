#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n, Matricula;
    float Calificacion;
    FILE *archivo;

    printf("\nIngrese el numero de alumnos: ");
    scanf("%d", &n);

    if ((archivo = fopen("Calificaciones de los alumnos.txt", "w")) != NULL)
    {
        fprintf(archivo, "%d ", n);

        for (i = 0; i < n; i++)
        {
            printf("\nIngrese la matricula del alumno %d: ", i + 1);
            scanf("%d", &Matricula);
            fprintf(archivo, "\n%d ", Matricula);

            for (j = 0; j < 5; j++)
            {
                printf("\nCalificacion %d: ", j + 1);
                scanf("%f", &Calificacion);
                fprintf(archivo, "%.2f ", Calificacion);
            }
        }

        fclose(archivo);
    }
    else
    {
        printf("No se puede abrir el archivo");
    }

    return 0;
}
