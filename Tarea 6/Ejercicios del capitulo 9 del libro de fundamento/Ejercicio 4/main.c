#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cad[40];
    FILE *ap;

    if ((ap = fopen("Hola.txt", "r")) != NULL)
    {
        while (!feof(ap))
        {
            fgets(cad, 40, ap);
            puts(cad);
        }
        fclose(ap);
    }
    else
    {
        printf("No se puede abrir el archivo");
    }

    return 0;
}
