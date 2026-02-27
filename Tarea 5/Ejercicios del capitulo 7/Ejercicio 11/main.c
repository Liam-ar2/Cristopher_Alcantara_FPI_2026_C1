#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char p, cad[50];
    int pocision_cad;

    printf("\nIngrese una cadena de caracteres (50 caracteres maximos): ");
    gets(cad);

    printf("\nIngrese una posicion en la cadena que desea verificar: ");
    scanf("%d", &pocision_cad);


        if ((pocision_cad >= 0) && (pocision_cad < 50))
        {
            p = cad[pocision_cad-1];

            if (islower(p))
                printf("\n%c es una minuscula", p);
            else
                printf("\n%c no es una minuscula", p);
        }
        else
            printf("\nEl valor ingresado de la pocision de caracteres es incorrecto");


    return 0;
}
