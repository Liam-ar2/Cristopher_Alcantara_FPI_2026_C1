#include <stdio.h>
#include <stdlib.h>

int main()
{
    char P1;
    FILE *archivo;

    archivo = fopen("Hola.txt", "w");

    if (archivo != NULL)
    {
        while ((P1 = getchar()) != '\n')
            fputc(P1, archivo);

        fclose(archivo);
    }
    else
    {
        printf("No se pudo abrir el archivo");
    }

    return 0;
}
