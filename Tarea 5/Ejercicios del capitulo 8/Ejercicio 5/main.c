#include <stdio.h>
#include <string.h>

union Datos
{
    char Celular[15];
    char Correo[20];
};

typedef struct
{
    int Matricula;
    char Nombre[20];
    char Carrera[20];
    float Promedio;
    union Datos Personales;
} Alumno;

void Lectura(Alumno *A);

int main(void)
{
   Alumno A1 = {20261142, "Liam", "Telecomunicaciones", 9.9, "1-234-56-78"};
   Alumno A2, A3;

    printf("Alumno 2\n");
    printf("Ingrese la matricula: ");
    scanf("%d", &A2.Matricula);
    fflush(stdin);

    printf("Ingrese el nombre: ");
    gets(A2.Nombre);
    fflush(stdin);

    printf("Ingrese la carrera: ");
    gets(A2.Carrera);

    printf("Ingrese el promedio: ");
    scanf("%f", &A2.Promedio);
    fflush(stdin);

    printf("Ingrese el correo electronico: ");
    gets(A2.Personales.Correo);

    printf("Alumno 3\n");
    Lectura(&A3);

    printf("\nDatos del alumno 1\n");
    printf("%d\n", A1.Matricula);
    puts(A1.Nombre);
    puts(A1.Carrera);
    printf("%.2f\n", A1.Promedio);
    puts(A1.Personales.Celular);

    printf("\nDatos del alumno 2\n");
    printf("%d\n", A2.Matricula);
    puts(A2.Nombre);
    puts(A2.Carrera);
    printf("%.2f\n", A2.Promedio);
    puts(A2.Personales.Celular);
    puts(A2.Personales.Correo);

    printf("Ingrese el telefono celular del alumno 2: ");
    fflush(stdin);
    gets(A2.Personales.Celular);

    puts(A2.Personales.Celular);
    puts(A2.Personales.Correo);

    printf("\nDatos del alumno 3\n");
    printf("%d\n", A3.Matricula);
    puts(A3.Nombre);
    puts(A3.Carrera);
    printf("%.2f\n", A3.Promedio);
    puts(A3.Personales.Celular);

    return 0;
}

void Lectura(Alumno *A)
{
    printf("\nIngrese la matricula: ");
    scanf("%d", &A->Matricula);
    fflush(stdin);

    printf("Ingrese el nombre: ");
    gets(A->Nombre);
    fflush(stdin);

    printf("Ingrese la carrera: ");
    gets(A->Carrera);

    printf("Ingrese el promedio: ");
    scanf("%f", &A->Promedio);

    printf("Ingrese el telefono celular: ");
    fflush(stdin);
    gets(A->Personales.Celular);
}
