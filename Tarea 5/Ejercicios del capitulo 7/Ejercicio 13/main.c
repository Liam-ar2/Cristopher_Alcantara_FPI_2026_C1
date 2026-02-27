#include <stdio.h>
#include <stdlib.h>

int cuenta(char *);

int main()
{
   int i;
    char cad[50];

    printf("\nIngrese la cadena de caracteres: ");
    gets(cad);

    i = cuenta(cad);

    printf("\nNumero de caracteres en la cadena: %d", i);
}

int cuenta(char *cadena)
{
    int c = 0;

    while (!cadena[c] == '\0')
        c++;

    return (c);
}
