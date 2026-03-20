#include <stdio.h>
#include <stdlib.h>

void promedio(FILE *);

int main(void)
{
    FILE *archivo;

    if ((archivo = fopen("Calificaciones de los alumnos.txt", "r")) != NULL)
    {
        promedio(archivo);
        fclose(archivo);
    }
    else
    {
        printf("No se pudo abrir el archivo");
    }

    return 0;
}

void promedio(FILE *archivo1)
{
    int i, j, n, Matricula;
    float pro, Calificacion;

    fscanf(archivo1, "%d", &n);

    for (i = 0; i < n; i++)
    {
        fscanf(archivo1, "%d", &Matricula);
        printf("%d\t", Matricula);

        pro = 0;

        for (j = 0; j < 5; j++)
        {
            fscanf(archivo1, "%f", &Calificacion);
            pro += Calificacion;
        }

        printf("\t %.2f ", pro / 5);
        printf("\n");
    }
}
