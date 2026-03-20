#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

typedef struct
{
    int Clave;
    char Nombre[20];
    int Carrera;
    float Promedio;
    float Examen;
    char Telefono[12];
} Alumno;

float F1(FILE *);
void F2(FILE *, FILE *, FILE *, FILE *, FILE *, FILE *);
void F3(FILE *, FILE *, FILE *, FILE *, FILE *);

int main(void)
{
    float Promedio1;
    FILE *Ap, *C1, *C2, *C3, *C4, *C5;

    Ap = fopen("alu1.dat", "r");
    C1 = fopen("car1.dat", "w+");
    C2 = fopen("car2.dat", "w+");
    C3 = fopen("car3.dat", "w+");
    C4 = fopen("car4.dat", "w+");
    C5 = fopen("car5.dat", "w+");

    if ((Ap != NULL) && (C1 != NULL) && (C2 != NULL) &&
        (C3 != NULL) && (C4 != NULL) && (C5 != NULL))
    {
        Promedio1 = F1(Ap);
        printf("\nPromedio del examen de admision: %.2f", Promedio1);

        F2(Ap, C1, C2, C3, C4, C5);
        F3(C1, C2, C3, C4, C5);
    }
    else
    {
        printf("\nLos archivos no se pudieron abrir");
    }

    fclose(Ap);
    fclose(C1);
    fclose(C2);
    fclose(C3);
    fclose(C4);
    fclose(C5);

    return 0;
}

float F1(FILE *Ap)
{
    Alumno Alu;
    float Sum = 0, Pro;
    int I = 0;

    fread(&Alu, sizeof(Alumno), 1, Ap);

    while (!feof(Ap))
    {
        I++;
        Sum += Alu.Examen;
        fread(&Alu, sizeof(Alumno), 1, Ap);
    }

    Pro = Sum / I;
    return Pro;
}

void F2(FILE *Ap, FILE *C1, FILE *C2, FILE *C3, FILE *C4, FILE *C5)
{
    Alumno Alu;

    rewind(Ap);
    fread(&Alu, sizeof(Alumno), 1, Ap);

    while (!feof(Ap))
    {
        if (((Alu.Examen >= 1300) && (Alu.Promedio >= 8)) ||
            ((Alu.Examen >= 1400) && (Alu.Promedio >= 7)))
        {
            switch (Alu.Carrera)
            {
                case 1: fwrite(&Alu, sizeof(Alumno), 1, C1); break;
                case 2: fwrite(&Alu, sizeof(Alumno), 1, C2); break;
                case 3: fwrite(&Alu, sizeof(Alumno), 1, C3); break;
                case 4: fwrite(&Alu, sizeof(Alumno), 1, C4); break;
                case 5: fwrite(&Alu, sizeof(Alumno), 1, C5); break;
            }
        }

        fread(&Alu, sizeof(Alumno), 1, Ap);
    }
}

void F3(FILE *C1, FILE *C2, FILE *C3, FILE *C4, FILE *C5)
{
    Alumno Alu;
    float Cal[5], Sum;
    int I;

    FILE *Files[5] = {C1, C2, C3, C4, C5};

    for (int K = 0; K < 5; K++)
    {
        rewind(Files[K]);
        Sum = 0;
        I = 0;

        fread(&Alu, sizeof(Alumno), 1, Files[K]);

        while (!feof(Files[K]))
        {
            I++;
            Sum += Alu.Examen;
            fread(&Alu, sizeof(Alumno), 1, Files[K]);
        }

        if (I)
            Cal[K] = Sum / I;
        else
            Cal[K] = 0;
    }

    for (I = 0; I < 5; I++)
        printf("\nPromedio carrera %d: %.2f", I + 1, Cal[I]);
}
