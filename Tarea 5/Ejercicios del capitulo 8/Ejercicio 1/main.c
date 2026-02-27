#include <stdio.h>
#include <string.h>

struct alumno
{
    int Matricula;
    char Nombre[20];
    char Carrera[20];
    float Promedio;
    char Direccion[20];
};

int main()
{
    struct alumno a1 = {20261142, "Liam", "Telecomunicaciones", 9.9, "RD"}, a2, a3;

    char nom[20], car[20], dir[20];
    int mat;
    float pro;

    ////Alumno 2////
    printf("\nIngrese la matricula del alumno 2: ");
    scanf("%d", &a2.Matricula);
    fflush(stdin);

    printf("Ingrese el nombre del alumno 2:");
    gets(a2.Nombre);

    printf("Ingrese la carrera del alumno 2: ");
    gets(a2.Carrera);

    printf("Ingrese el promedio del alumno 2: ");
    scanf("%f", &a2.Promedio);
    fflush(stdin);

    printf("Ingrese la direccion del alumno 2: ");
    gets(a2.Direccion);

    printf("\nIngrese la matricula del alumno 3: ");
    scanf("%d", &mat);
    a3.Matricula = mat;
    fflush(stdin);

    ////Alumno 3////
    printf("Ingrese el nombre del alumno 3: ");
    gets(nom);
    strcpy(a3.Nombre, nom);

    printf("Ingrese la carrera del alumno 3: ");
    gets(car);
    strcpy(a3.Carrera, car);

    printf("Ingrese el promedio del alumno 3: ");
    scanf("%f", &pro);
    a3.Promedio = pro;
    fflush(stdin);

    printf("Ingrese la direccion del alumno 3: ");
    gets(dir);
    strcpy(a3.Direccion, dir);

    //// Datos ////
    printf("\nDatos del alumno 1\n");
    printf("%d\n", a1.Matricula);
    puts(a1.Nombre);
    puts(a1.Carrera);
    printf("%.2f\n", a1.Promedio);
    puts(a1.Direccion);

    printf("\nDatos del alumno 2\n");
    printf("%d\n", a2.Matricula);
    puts(a2.Nombre);
    puts(a2.Carrera);
    printf("%.2f\n", a2.Promedio);
    puts(a2.Direccion);

    printf("\nDatos del alumno 3\n");
    printf("%d \t %s \t %s \t %.2f \t %s",
    a3.Matricula, a3.Nombre, a3.Carrera,
    a3.Promedio, a3.Direccion);

    return 0;
}
