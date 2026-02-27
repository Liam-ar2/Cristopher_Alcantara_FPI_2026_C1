#include <stdio.h>
#include <stdlib.h>

void inverso(char *);

int main()
{
  char fra[50];

    printf("\nIngrese una linea de texto: ");
    gets(fra);

    printf("\nLa linea de texto en forma inversa es: ");
    inverso(fra);
}

void inverso(char *cadena)
{

    if (cadena[0] != '\0')
    {
        inverso(&cadena[1]);
        putchar(cadena[0]);
    }

    return 0;
}
