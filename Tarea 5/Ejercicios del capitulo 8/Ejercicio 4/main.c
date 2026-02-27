#include <stdio.h>
#include <string.h>

typedef struct
{
    int Matricula;
    char Nombre[30];
    float Cal[5];

} Alumno;

void Lectura(Alumno A[], int T);
void F1(Alumno A[], int T);
void F2(Alumno A[], int T);
void F3(Alumno A[], int T);

int main()
{
    Alumno ARRE[50];
    int TAM;

        do
        {
            printf("Ingrese el tamaño del arreglo: ");
            scanf("%d", &TAM);
        }
        while (TAM > 50 || TAM < 1);

        Lectura(ARRE, TAM);
        F1(ARRE, TAM);
        F2(ARRE, TAM);
        F3(ARRE, TAM);

    return 0;
}

void Lectura(Alumno A[], int T)
{
    int I, J;

        for (I = 0; I < T; I++)
        {
            printf("\nIngrese los datos del alumno %d", I + 1);

            printf("\nIngrese la matricula del alumno: ");
            scanf("%d", &A[I].Matricula);
            fflush(stdin);

            printf("Ingrese el nombre del alumno: ");
            gets(A[I].Nombre);

            for (J = 0; J < 5; J++)
            {
                printf("\tIngrese la calificacion %d del alumno %d: ", J + 1, I + 1);
                scanf("%f", &A[I].Cal[J]);
            }
        }
}

void F1(Alumno A[], int T)
{
    int I, J;
    float SUM, PRO;

        for (I = 0; I < T; I++)
        {
            printf("\nMatricula del alumno: %d", A[I].Matricula);

            SUM = 0.0;

            for (J = 0; J < 5; J++)
                SUM = SUM + A[I].Cal[J];

            PRO = SUM / 5;

            printf("\t\tPromedio: %.2f", PRO);
        }
}

void F2(Alumno A[], int T)
{
    int I;

    printf("\nAlumnos con calificacion en la tercera materia > 9");

    for (I = 0; I < T; I++)
        if (A[I].Cal[2] > 9)
            printf("\nLa matricula del alumno: %d", A[I].Matricula);

}

void F3(Alumno A[], int T)
{
    int I;
    float PRO, SUM = 0.0;

    for (I = 0; I < T; I++)
        SUM = SUM + A[I].Cal[3];

    PRO = SUM / T;

    printf("\n\nEl promedio de la materia 4: %.2f", PRO);

}
