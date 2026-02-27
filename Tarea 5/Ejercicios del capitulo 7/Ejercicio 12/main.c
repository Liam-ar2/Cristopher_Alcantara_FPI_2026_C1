#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
   char cad[50];
    int i = 0, mi = 0, ma = 0;

    printf("\nIngrese la cadena de caracteres (50 caracteres maximos): ");
    gets(cad);

    while(cad[i] != '\0')
    {
        if (islower(cad[i]))
            mi++;
        else if (isupper(cad[i]))
            ma++;
        i++;
    }

    printf("\n\nNumero de letras minusculas: %d", mi);
    printf("\nNumero de letras mayusculas: %d", ma);
    return 0;
}
