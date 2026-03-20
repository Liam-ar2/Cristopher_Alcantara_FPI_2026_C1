#include <stdio.h>
#include <ctype.h>
#include <string.h>

void cambia(FILE *, FILE *);

int main(void)
{
    FILE *ar1;
    FILE *ar2;

    ar1 = fopen("archivo1.txt", "r");
    ar2 = fopen("archivo2.txt", "w");

    if ((ar1 != NULL) && (ar2 != NULL))
    {
        cambia(ar1, ar2);
        fclose(ar1);
        fclose(ar2);
    }
    else
    {
        printf("No se pueden abrir los archivos");
    }

    return 0;
}

void cambia(FILE *ap1, FILE *ap2)
{
    int i, j, k;
    char cad[30], cad1[30], *cad2, aux[30];

    while (!feof(ap1))
    {
        fgets(cad, 30, ap1);
        strcpy(cad1, cad);

        cad2 = strstr(cad1, "méxico");

        while (cad2 != NULL)
        {
            cad2[0] = 'M';

            i = strlen(cad1);
            j = strlen(cad2);
            k = i - j;

            if (k)
            {
                strncpy(aux, cad1, k);
                aux[k] = '\0';
                strcat(aux, cad2);
                strcpy(cad1, aux);
            }
            else
            {
                strcpy(cad1, cad2);
            }

            cad2 = strstr(cad1, "México");
        }

        fputs(cad1, ap2);
    }
}
