#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cad[50];
    int res;
    FILE *archivo;

    if ((archivo = fopen("Hola.txt", "w")) != NULL)
    {
        printf("\nQuiere ingresar una cadena de caracteres? Si-1 No-0:");
        scanf("%d", &res);

        while (res)
        {
            fflush(stdin);
            printf("Ingrese la cadena: ");
            gets(cad);
            fputs(cad, archivo);

            printf("\nQuiere ingresar otra cadena de caracteres? Si-1 No-0:");
            scanf("%d", &res);

            if (res)
                fputs("\n", archivo);
        }

        fclose(archivo);
    }
    else
    {
        printf("No se pudo abrir el archivo");
    }

    return 0;
}
