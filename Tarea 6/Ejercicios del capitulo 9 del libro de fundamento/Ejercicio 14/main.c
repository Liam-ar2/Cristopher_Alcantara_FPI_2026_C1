#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void minymay(FILE *);

int main(void)
{
    FILE *archivo;

    if ((archivo = fopen("Mayusculas y minusculas.txt", "r")) != NULL)
    {
        minymay(archivo);
        fclose(archivo);
    }
    else
    {
        printf("No se pudo abrir el archivo");
    }

    return 0;
}

void minymay(FILE *archivoC)
{
    int minuscula = 0, mayuscula = 0;
    char p;

    while (!feof(archivoC))
    {
        p = fgetc(archivoC);

        if (islower(p))
            minuscula++;
        else if (isupper(p))
            mayuscula++;
    }

    printf("\nNumero de minusculas: %d", minuscula);
    printf("\nNumero de mayusculas: %d", mayuscula);
}
