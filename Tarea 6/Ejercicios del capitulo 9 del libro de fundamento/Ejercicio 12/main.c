#include <stdio.h>
#include <stdlib.h>

int main()
{
    char p1;
    FILE *archivo;

    archivo = fopen("libro.txt", "a");

    if (archivo != NULL)
    {
        while ((p1 = getchar()) != '\n')
        fputc(p1, archivo);

        fclose(archivo);
    }
    else
    {
        printf("No se pudo abrir el archivo");
    }

    return 0;
    return 0;
}
