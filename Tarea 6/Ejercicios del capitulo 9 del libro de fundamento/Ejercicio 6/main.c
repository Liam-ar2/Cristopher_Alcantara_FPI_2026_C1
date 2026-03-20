#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, j, n, Matricula;
    float Calificaion, Promedio;
    FILE *archivo;

    if ((archivo = fopen("calificaciones de los alumnos.txt", "r")) != NULL)
    {
        fscanf(archivo, "%d", &n);

        for (i = 0; i < n; i++)
        {
            fscanf(archivo, "%d", &Matricula);
            printf("%d\t", Matricula);

            Promedio = 0;

            for (j = 0; j < 5; j++)
            {
                fscanf(archivo, "%f", &Calificaion);
                Promedio += Calificaion;
            }

            printf("\t %.2f ", Promedio / 5);
            printf("\n");
        }

        fclose(archivo);
    }
    else
    {
        printf("No se pudo abrir el archivo");
    }

    return 0;
}
