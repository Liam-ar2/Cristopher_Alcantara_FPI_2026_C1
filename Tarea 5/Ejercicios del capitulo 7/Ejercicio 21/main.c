#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void intercambia(char FRA[][30], int);

int main()
{
     int i, n;
    char FRA[20][30];

    printf("\nIngrese el numero de filas: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Escriba la linea de texto numero %d: ", i+1);
        fflush(stdin);
        gets(FRA[i]);
    }

    printf("\n\n");

    intercambia(FRA, n);

    for (i = 0; i < n; i++)
    {
        printf("Impresion de la linea %d: ", i+1);
        puts(FRA[i]);
    }
}

void intercambia(char FRA[][30], int n)
{
    int i, j;
    char cad[30];

    j = n - 1;

    for (i = 0; i < (n/2); i++)
    {
        strcpy(cad, FRA[i]);
        strcpy(FRA[i], FRA[j]);
        strcpy(FRA[j], cad);
        j--;
    }

    return 0;
}
