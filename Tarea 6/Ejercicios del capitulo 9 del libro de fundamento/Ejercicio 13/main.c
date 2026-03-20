#include <stdio.h>
#include <stdlib.h>

int cuenta(char);

int main(void)
{
    int res;
    char caracter;

    printf("\nIngrese el caracter a buscar en el archivo: ");
    caracter = getchar();

    res = cuenta(caracter);

    if (res != -1)
        printf("\n\nEl caracter %c se encuentra en el archivo %d veces", caracter, res);
    else
        printf("No se pudo abrir el archivo");

    return 0;
}

int cuenta(char caracter)
{
    int res, con = 0;
    char p;
    FILE *archivo;

    if ((archivo = fopen("archivo.txt", "r")) != NULL)
    {
        while (!feof(archivo))
        {
            p = getc(archivo);
            if (p == caracter)
                con++;
        }
        fclose(archivo);
        res = con;
    }
    else
        res = -1;

    return res;
}
