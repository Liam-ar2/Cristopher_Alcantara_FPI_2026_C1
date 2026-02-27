#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char Mat[20];
    int Pro;

} matpro;

typedef struct
{
    int Matri;
    char Nom[20];
    matpro Cal[5];

} alumno;

void Lectura(alumno *, int);
void F1(alumno *, int);
void F2(alumno *, int);
void F3(alumno *, int);

void main(void)
{
    alumno ALU[50];
    int TAM;

    do
    {
        printf("Ingrese el tamao del arreglo: ");
        scanf("%d", &TAM);
    }
    while (TAM > 50 || TAM < 1);

    Lectura(ALU, TAM);
    F1(ALU, TAM);
    F2(ALU, TAM);
    F3(ALU, TAM);
}

void Lectura(alumno A[], int T)
{
    int I, J;

    for(I = 0; I < T; I++)
    {
        printf("\nIngrese los datos del alumno %d", I + 1);

        printf("\nIngrese la matricula del alumno: ");
        scanf("%d", &A[I].Matri);
        getchar();

        printf("Ingrese el nombre del alumno: ");
        fgets(A[I].Nom, 20, stdin);
        A[I].Nom[strcspn(A[I].Nom, "\n")] = '\0';

        for (J = 0; J < 5; J++)
        {
            printf("\tMateria %d: ", J + 1);
            fgets(A[I].Cal[J].Mat, 20, stdin);
            A[I].Cal[J].Mat[strcspn(A[I].Cal[J].Mat, "\n")] = '\0';

            printf("\tPromedio %d: ", J + 1);
            scanf("%d", &A[I].Cal[J].Pro);
            getchar();
        }
    }
}

void F1(alumno A[], int T)
{
    int I, J;
    float SUM;

    for (I = 0; I < T; I++)
    {
        printf("\nMatricula del alumno : %d", A[I].Matri);

        SUM = 0.0;

        for (J = 0; J < 5; J++)
            SUM += A[I].Cal[J].Pro;

        SUM = SUM / 5;

        printf("\tPromedio: %.2f", SUM);
    }
}

void F2(alumno A[], int T)
{
    int I;

    printf("\nAlumnos con calificacion mayor a 9 en la tercera materia");

    for (I = 0; I < T; I++)
        if (A[I].Cal[2].Pro > 9)
            printf("\nMatricula del alumno : %d", A[I].Matri);
}

void F3(alumno A[], int T)
{
    int I;
    float SUM = 0.0;

    for (I = 0; I < T; I++)
        SUM += A[I].Cal[3].Pro;

    SUM = SUM / T;

    printf("\n\nPromedio de la cuarta materia: %.2f", SUM);

    return 0;
}
