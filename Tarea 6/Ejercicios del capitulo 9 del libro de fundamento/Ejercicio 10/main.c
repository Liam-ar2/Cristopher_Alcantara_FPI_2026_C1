#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;
} alumno;

void modifica(FILE *);

int main(void)
{
    FILE *archivo;

    if ((archivo = fopen("ad1.dat", "r+")) != NULL)
        modifica(archivo);
    else
        printf("\nEl archivo no se pudo abrir");

    fclose(archivo);

    return 0;
}

void modifica(FILE *ap)
{
    int d;
    alumno alu;

    printf("\nIngrese el numero de registro que desea modificar: ");
    scanf("%d", &d);

    fseek(ap, (d - 1) * sizeof(alumno), 0);

    fread(&alu, sizeof(alumno), 1, ap);

    printf("\nIngrese el promedio del alumno: ");
    scanf("%f", &alu.promedio);

    fseek(ap, (d - 1) * sizeof(alumno), 0);

    fwrite(&alu, sizeof(alumno), 1, ap);
}
