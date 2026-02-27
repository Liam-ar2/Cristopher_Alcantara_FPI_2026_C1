#include <stdio.h>
#include <stdlib.h>

int cuenta(char *);

int main()
{

    int i;
    char cad[50];

    printf("\nIngrese una cadena de caracteres: ");
    gets(cad);

    i = cuenta(cad);

    printf("\nNumero de caracteres en la cadena: %d", i);
}

int cuenta(char *cadena)
{
    if (cadena[0] == '\0')
        return 0;
    else
        return (1 + cuenta(&cadena[1]));

        return(0);
}
