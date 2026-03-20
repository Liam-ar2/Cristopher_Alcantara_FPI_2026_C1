#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int clave;
    int departamento;
    float salario;
    float ventas[12];

} empleado;

void incrementa(FILE *);

int main(void)
{
    FILE *archivo;

    if ((archivo = fopen("ad5.dat", "r+")) != NULL)
        incrementa(archivo);
    else
        printf("\nEl archivo no se pudi abrir");

    rewind(archivo);
    fclose(archivo);

    return 0;
}

void incrementa(FILE *ap)
{
    int i, j, t;
    float sum;
    empleado emp;

    t = sizeof(empleado);

    fread(&emp, sizeof(empleado), 1, ap);

    while (!feof(ap))
    {
        i = ftell(ap) / t;

        sum = 0;
        for (j = 0; j < 12; j++)
            sum += emp.ventas[j];

        if (sum > 1000000)
        {
            emp.salario = emp.salario * 1.10;

            fseek(ap, (i - 1) * sizeof(empleado), 0);
            fwrite(&emp, sizeof(empleado), 1, ap);

            fseek(ap, i * sizeof(empleado), 0);
        }

        fread(&emp, sizeof(empleado), 1, ap);
    }
}
