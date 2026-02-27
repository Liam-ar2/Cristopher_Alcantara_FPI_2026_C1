#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char Calle[20];
    int Numero;
    int Cp;
    char Localidad[20];
} Domicilio;

struct Empleado
{
    char Nombre[20];
    char Departamento[20];
    float Sueldo;
    Domicilio Direccion;
};

void Lectura(struct Empleado *A)
{
    printf("\nIngrese el nombre del empleado: ");
    gets(A->Nombre);
    fflush(stdin);

    printf("Ingrese el departamento de la empresa: ");
    gets(A->Departamento);

    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &A->Sueldo);
    fflush(stdin);

    printf("Ingrese la direccion del empleado:");
    printf("\n\tCalle: ");
    gets(A->Direccion.Calle);

    printf("\tNumero: ");
    scanf("%d", &A->Direccion.Numero);

    printf("\tCodigo Postal: ");
    scanf("%d", &A->Direccion.Cp);
    fflush(stdin);

    printf("\tLocalidad: ");
    gets(A->Direccion.Localidad);
}

int main(void)
{
    struct Empleado E0 = {"Liam", "Ventas", 75500.75,
                          {"San Juan", 100, 4680, "Los maestros"}};

    struct Empleado *E1, *E2, E3, E4;

    E1 = (struct Empleado *)malloc(sizeof(struct Empleado));

    printf("\nIngrese el nombre del empleado 1: ");
    scanf("%s", E1->Nombre);
    fflush(stdin);

    printf("Ingrese el departamento de la empresa: ");
    gets(E1->Departamento);

    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &E1->Sueldo);

    printf("----Ingrese la direccion del empleado----");
    printf("\n\tCalle: ");
    fflush(stdin);
    gets(E1->Direccion.Calle);

    printf("\tNumero: ");
    scanf("%d", &E1->Direccion.Numero);

    printf("\tCodigo Postal: ");
    scanf("%d", &E1->Direccion.Cp);

    printf("\tLocalidad: ");
    fflush(stdin);
    gets(E1->Direccion.Localidad);

    printf("\nIngrese el nombre del empleado 3: ");
    scanf("%s", E3.Nombre);
    fflush(stdin);

    printf("Ingrese el departamento de la empresa: ");
    gets(E3.Departamento);

    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &E3.Sueldo);

    printf("Ingrese la direccion del empleado:");
    printf("\n\tCalle: ");
    fflush(stdin);
    gets(E3.Direccion.Calle);

    printf("\tNumero: ");
    scanf("%d", &E3.Direccion.Numero);

    printf("\tCodigo Postal: ");
    scanf("%d", &E3.Direccion.Cp);

    printf("\tLocalidad: ");
    fflush(stdin);
    gets(E3.Direccion.Localidad);

    E2 = (struct Empleado *)malloc(sizeof(struct Empleado));

    Lectura(E2);
    Lectura(&E4);

    printf("\nDatos del empleado 1\n");
    printf("%s\t%s\t%.2f\t%s\t%d\t%d\t%s",
    E1->Nombre,
    E1->Departamento,
    E1->Sueldo,
    E1->Direccion.Calle,
    E1->Direccion.Numero,
    E1->Direccion.Cp,
    E1->Direccion.Localidad);

    printf("\nDatos del empleado 4\n");
    printf("%s\t%s\t%.2f\t%s\t%d\t%d\t%s",
    E4.Nombre,
    E4.Departamento,
    E4.Sueldo,
    E4.Direccion.Calle,
    E4.Direccion.Numero,
    E4.Direccion.Cp,
    E4.Direccion.Localidad);

    free(E1);
    free(E2);

    return 0;
}
