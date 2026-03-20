#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int Matricula;
    char Nombre[20];
    int Carrera;
    float Promedio;
} alumno;

void ordena(FILE *, FILE *);

int main(void)
{
    FILE *ar1, *ar2;

    ar1 = fopen("archivo1.dat", "r");
    ar2 = fopen("archivo2.dat", "w");

    if ((ar1 != NULL) && (ar2 != NULL))
        ordena(ar1, ar2);
    else
        printf("\nLos archivos no se pudieron abrir");

    fclose(ar1);
    fclose(ar2);

    return 0;
}

void ordena(FILE *ap1, FILE *ap2)
{
    alumno alu;
    int t, n, i;

    t = sizeof(alumno);

    fseek(ap1, 0, 2);
    n = ftell(ap1) / t;

    rewind(ap1);

    for (i = n - 1; i >= 0; i--)
    {
        fseek(ap1, i * sizeof(alumno), 0);
        fread(&alu, sizeof(alumno), 1, ap1);
        fwrite(&alu, sizeof(alumno), 1, ap2);
    }
}
