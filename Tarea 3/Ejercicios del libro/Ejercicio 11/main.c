#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int Nota_1 = 0, Nota_2 = 0, Nota_3 = 0, Nota_4 = 0, Nota_5 = 0;
    float Calificacion;

    printf("Ingresar la calificacion del alumno: ");
    scanf("%f", &Calificacion);

    while (Calificacion != -1)
    {
        if (Calificacion < 4)
            Nota_1++;
        else
           if (Calificacion < 6)
               Nota_2++;
        else
            if (Calificacion < 8)
                Nota_3++;
        else
            if (Calificacion < 9)
                Nota_4++;
        else
                Nota_5++;

        printf("Ingresar la calificacion del alumno (-ingrese -1 para terminar el proceso-): ");
        scanf("%f", &Calificacion);
    }
        printf("\n0..3.99 = %d", Nota_1);
        printf("\n4..5.99 = %d", Nota_2);
        printf("\n6..7.99 = %d", Nota_3);
        printf("\n8..8.99 = %d", Nota_4);
        printf("\n9..10 = %d\n", Nota_5);

         return 0;
    }



