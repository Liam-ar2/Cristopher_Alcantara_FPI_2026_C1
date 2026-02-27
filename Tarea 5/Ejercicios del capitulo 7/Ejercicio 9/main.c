#include <stdio.h>
#include <stdlib.h>

int cuenta(char *, char);

int main()
{
    char caracter, cad[50];
    int res;

    printf("\nIngrese la cadena de caracteres: ");
    gets(cad);

    fflush(stdin);

    printf("\nIngrese el caracter que busca: ");
    caracter = getchar();

    res = cuenta(cad, caracter);

    printf("\n\n%c se encuentra %d veces en la cadena %s", caracter, res, cad);
}

int cuenta(char *cad, char caracter)
{
    int i = 0, r = 0;

    while (cad[i] != '\0')
    {
        if (cad[i] == caracter)
            r++;

        i++;
    }

    return (r);
}
