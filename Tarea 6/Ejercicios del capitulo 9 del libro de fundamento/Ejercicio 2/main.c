#include <stdio.h>
#include <stdlib.h>

int main()
{
    char p1;
    FILE *archivo;

    if ((archivo = fopen("Adios.txt", "r")) != NULL)
    {
        while (!feof(archivo))
        {
            p1 = fgetc(archivo);
            putchar(p1);
        }
        fclose(archivo);
    }
    else
    {
        printf("No se pudo abrir el archivo");
    }

    return 0;
}
