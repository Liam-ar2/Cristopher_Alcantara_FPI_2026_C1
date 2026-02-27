#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int longitud(char *cadena);

int main()
{
    int i, n, l = -1, p, t;
    char cad[50], FRA[20][50];

    printf("\nIngrese el numero de filas del arreglo: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Ingrese la linea %d de texto.50 caracteres maximos: ", i+1);
        fflush(stdin);
        gets(FRA[i]);
    }

    printf("\n");

    for (i = 0; i < n; i++)
    {
        strcpy(cad, FRA[i]);
        t = longitud(cad);

        if (t > l)
        {
            l = t;
            p = i;
        }
    }

    printf("\nLa cadena con mas carcteres es: ");
    puts(FRA[p]);

    printf("\nEl numero de caracteres es: %d", l);
}

int longitud(char *cadena)
{
    int cue = 0;

    while (cadena[cue] != '\0')
        cue++;

    return cue;
}
