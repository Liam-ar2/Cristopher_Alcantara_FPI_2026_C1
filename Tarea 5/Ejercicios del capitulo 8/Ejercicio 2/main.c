#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct alumno
{
    int Matricula;
    char Nombre[20];
    char Carrera[20];
    float Promedio;
    char Direccion[20];
};

void Lectura(struct alumno *);

int main()
{
    struct alumno a0 = {20261142, "Liam", "Telecomunicaciones", 9.9, "RD"};
    struct alumno *a3, *a4, *a5, a6;

    a3 = &a0;
    a4 = (struct alumno *)malloc(sizeof(struct alumno));


    printf("\nIngrese la matricula del alumno 4: ");
    scanf("%d", &(*a4).Matricula);
    fflush(stdin);

    printf("Ingrese el nombre del alumno 4: ");
    gets(a4->Nombre);

    printf("Ingrese la carrera del alumno 4: ");
    gets((*a4).Carrera);

    printf("Ingrese promedio del alumno 4: ");
    scanf("%f", &a4->Promedio);
    fflush(stdin);

    printf("Ingrese la direccion del alumno 4: ");
    gets(a4->Direccion);

    a5 = (struct alumno *)malloc(sizeof(struct alumno));
    Lectura(a5);
    Lectura(&a6);

    printf("\nDatos del alumno 3\n");
    printf("%d\t%s\t%s\t%.2f\t%s", a3->Matricula, a3->Nombre, a3->Carrera,
           a3->Promedio, a3->Direccion);

    printf("\nDatos del alumno 4\n");
    printf("%d\t%s\t%s\t%.2f\t%s", a4->Matricula, a4->Nombre, a4->Carrera,
           a4->Promedio, a4->Direccion);

    printf("\nDatos del alumno 5\n");
    printf("%d\t%s\t%s\t%f\t%s", a5->Matricula, a5->Nombre, a5->Carrera,
           a5->Promedio, a5->Direccion);

    printf("\nDatos del alumno 6\n");
    printf("%d\t%s\t%s\t%.2f\t%s", a6.Matricula, a6.Nombre, a6.Carrera,
           a6.Promedio, a6.Direccion);
}

void Lectura(struct alumno *a)
{
    printf("\nIngrese la matricula del alumno: ");
    scanf("%d", &(*a).Matricula);
    fflush(stdin);

    printf("Ingrese el nombre del alumno: ");
    gets(a->Nombre);
    fflush(stdin);

    printf("Ingrese la carrera del alumno: ");
    gets((*a).Carrera);

    printf("Ingrese el promedio del alumno: ");
    scanf("%f", &a->Promedio);
    fflush(stdin);

    printf("Ingrese la direccion del alumno: ");
    gets(a->Direccion);
}
