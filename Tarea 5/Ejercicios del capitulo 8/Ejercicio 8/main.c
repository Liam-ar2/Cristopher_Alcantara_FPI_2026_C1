#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char Cal[20];
    int Num;
    char Col[20];
    char Cp[5];
    char Ciu[20];

} domicilio;

typedef struct
{
    char Nom[20];
    int Edad;
    char Sexo;
    int Con;
    domicilio Dom;
    char Tel[10];

} paciente;

void Lectura(paciente *, int);
void F1(paciente *, int);
void F2(paciente *, int);
void F3(paciente *, int);

void main(void)
{
    paciente Hospital[100];
    int Tam;

    do
    {
        printf("Ingrese el numero de pacientes: ");
        scanf("%d", &Tam);
    }
    while (Tam > 50 || Tam < 1);

    Lectura(Hospital, Tam);
    F1(Hospital, Tam);
    F2(Hospital, Tam);
    F3(Hospital, Tam);
}

void Lectura(paciente A[], int T)
{
    int I;

    for (I = 0; I < T; I++)
    {
        printf("\n\t\tPaciente %d", I + 1);

        getchar();
        printf("\nNombre: ");
        fgets(A[I].Nom, 20, stdin);
        A[I].Nom[strcspn(A[I].Nom, "\n")] = '\0';

        printf("Edad: ");
        scanf("%d", &A[I].Edad);

        getchar();
        printf("Sexo (F-M): ");
        scanf("%c", &A[I].Sexo);

        printf("Condicion (1..5): ");
        scanf("%d", &A[I].Con);

        getchar();
        printf("\tCalle: ");
        fgets(A[I].Dom.Cal, 20, stdin);
        A[I].Dom.Cal[strcspn(A[I].Dom.Cal, "\n")] = '\0';

        printf("\tNumero: ");
        scanf("%d", &A[I].Dom.Num);

        getchar();
        printf("\tColonia: ");
        fgets(A[I].Dom.Col, 20, stdin);
        A[I].Dom.Col[strcspn(A[I].Dom.Col, "\n")] = '\0';

        printf("\tCodigo Postal: ");
        fgets(A[I].Dom.Cp, 5, stdin);
        A[I].Dom.Cp[strcspn(A[I].Dom.Cp, "\n")] = '\0';

        printf("\tCiudad: ");
        fgets(A[I].Dom.Ciu, 20, stdin);
        A[I].Dom.Ciu[strcspn(A[I].Dom.Ciu, "\n")] = '\0';

        printf("Telefono: ");
        fgets(A[I].Tel, 10, stdin);
        A[I].Tel[strcspn(A[I].Tel, "\n")] = '\0';
    }
}

void F1(paciente A[], int T)
{
    int I;
    int Fem = 0, Mas = 0, Tot;

    for (I = 0; I < T; I++)
    {
        switch (A[I].Sexo)
        {
        case 'F': Fem++; break;
        case 'M': Mas++; break;
        }
    }

    Tot = Fem + Mas;

    printf("\nPorcentaje de Hombres: %.2f", (float)Mas / Tot * 100);
    printf("\nPorcentaje de Mujeres: %.2f", (float)Fem / Tot * 100);
}

void F2(paciente A[], int T)
{
    int I;
    int C1 = 0, C2 = 0, C3 = 0, C4 = 0, C5 = 0;

    for (I = 0; I < T; I++)
    {
        switch (A[I].Con)
        {
        case 1: C1++; break;
        case 2: C2++; break;
        case 3: C3++; break;
        case 4: C4++; break;
        case 5: C5++; break;
        }
    }

    printf("\Pacientes en condicion 1: %d", C1);
    printf("\Pacientes en condicion 2: %d", C2);
    printf("\Pacientes en condicion 3: %d", C3);
    printf("\Pacientes en condicion 4: %d", C4);
    printf("\Pacientes en condicion 5: %d", C5);
}

void F3(paciente A[], int T)
{
    int I;

    printf("\nPacientes ingresados en estado de gravedad:");

    for (I = 0; I < T; I++)
    {
        if (A[I].Con == 5)
        {
            printf("\nNombre: %s\tTelefono: %s", A[I].Nom, A[I].Tel);
        }
    }

    return 0;
}
