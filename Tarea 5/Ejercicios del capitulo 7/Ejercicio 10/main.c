#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c, cad[10];
    int i = 0;
    float sum = 0.0;

    printf("\nQuiere ingresar una cadena de caracteres (S/N)? ");
    c = getchar();

    while (c == 'S')
    {
        printf("\nIngrese la cadena de caracteres: ");
        fflush(stdin);
        gets(cad);

        i++;
        sum += atof(cad);

        printf("\nQuiere ingresar otra cadena de caracteres (S/N)? ");
        c = getchar();
    }

    printf("\nSuma: %.2f", sum);
    printf("\nPromedio: %.2f", sum / i);

    return 0;
}
