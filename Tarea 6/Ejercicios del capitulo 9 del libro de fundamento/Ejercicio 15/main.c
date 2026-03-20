#include <stdio.h>
#include <stdlib.h>

#include <ctype.h>

void minymay(FILE *);

int main(void)
{
    FILE *ap;

    if ((ap = fopen("Mayusculas y minusculas.txt", "r")) != NULL)
    {
        minymay(ap);
        fclose(ap);
    }
    else
    {
        printf("No se pudo abrir el archivo");
    }

    return 0;
}

void minymay(FILE *ap1)
{
    char cad[30];
    int i, minusculas = 0, mayusculas = 0;

    while (!feof(ap1))
    {
        fgets(cad, 30, ap1);

        i = 0;
        while (cad[i] != '\0')
        {
            if (islower(cad[i]))
                minusculas++;
            else if (isupper(cad[i]))
                mayusculas++;

            i++;
        }
    }

    printf("\n\nNumero de letras minusculas: %d", minusculas);
    printf("\nNumero de letras mayusculas: %d", mayusculas);
}
