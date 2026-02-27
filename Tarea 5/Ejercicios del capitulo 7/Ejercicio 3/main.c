#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *cad0 = "Hola";
    char cad1[20] = "Adios";
    char cad2[] = "RD";
    char cad3[] = {'S', 'a', 'l', 'u', 'd', 'o', 's','\0'};

    char cad4[20], cad5[20], cad6[20];

    printf("\nLa cadena cad0 es: ");
    puts(cad0);

    printf("\nLa cadena cad1 es: \n ");
    printf("%s", cad1);

    printf("\nLa cadena cad2 es: \n ");
    puts(cad2);

    printf("\nLa cadena cad3 es: \n ");
    puts(cad3);

    printf("\nIngrese una linea de texto: \n");

    gets(cad4);

    printf("\nLa cadena cad4 es: ");
    puts(cad4);

    fflush(stdin);

    printf("\nIngrese una linea de texto: \n");
    scanf("%s", cad5);

    printf("\nLa cadena cad5 es: \n ");
    printf("%s", cad5);

    fflush(stdin);

    char p;
    int i = 0;

    printf("\nIngrese una linea de texto: \n");

    while ((p = getchar()) != '\n')
        cad6[i++] = p;

    cad6[i] = '\0';

    printf("\nLa cadena cad6 es: \n ");
    puts(cad6);

    return 0;
}
