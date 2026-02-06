#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Voto, Candidato_1 = 0, Candidato_2 = 0, Candidato_3 = 0, Candidato_4 = 0, Candidato_5 = 0, Voto_nulo = 0, Suma_Votos;
    float Porcentaje_voto_1, Porcentaje_voto_2, Porcentaje_voto_3, Porcentaje_voto_4, Porcentaje_voto_5, Porcentaje_voto_Nulo;

    printf("Ingrese el primer voto: ");
    scanf("%d", &Voto);

    while (Voto)
    {
        switch (Voto)
        {
            case 1: Candidato_1++; break;
            case 2: Candidato_2++; break;
            case 3: Candidato_3++; break;
            case 4: Candidato_4++; break;
            case 5: Candidato_5++; break;
            default: Voto_nulo++; break;
        }

        printf("Ingrese el siguiente voto (-ingrese 0 para terminar para terminar el proceso-): ");
        scanf("%d", &Voto);
    }

    Suma_Votos = Candidato_1 + Candidato_2 + Candidato_3 + Candidato_4 + Candidato_5 + Voto_nulo;

    if (Suma_Votos > 0)
    {
        Porcentaje_voto_1 = ((float)Candidato_1 / Suma_Votos) * 100;
        Porcentaje_voto_2 = ((float)Candidato_2 / Suma_Votos) * 100;
        Porcentaje_voto_3 = ((float)Candidato_3 / Suma_Votos) * 100;
        Porcentaje_voto_4 = ((float)Candidato_4 / Suma_Votos) * 100;
        Porcentaje_voto_5 = ((float)Candidato_5 / Suma_Votos) * 100;
        Porcentaje_voto_Nulo = ((float)Voto_nulo / Suma_Votos) * 100;

        printf("\nTotal de votos: %d", Suma_Votos);
        printf("\n\nCandidato 1: %d votos -- Porcentaje: %5.2f", Candidato_1, Porcentaje_voto_1);
        printf("\nCandidato 2: %d votos -- Porcentaje: %5.2f", Candidato_2, Porcentaje_voto_2);
        printf("\nCandidato 3: %d votos -- Porcentaje: %5.2f", Candidato_3, Porcentaje_voto_3);
        printf("\nCandidato 4: %d votos -- Porcentaje: %5.2f", Candidato_4, Porcentaje_voto_4);
        printf("\nCandidato 5: %d votos -- Porcentaje: %5.2f", Candidato_5, Porcentaje_voto_5);
        printf("\nNulos: %d votos -- Porcentaje: %5.2f\n", Voto_nulo, Porcentaje_voto_Nulo);
    }
    else
    {
        printf("\nNo se registraron votos.\n");
    }

    return 0;
}
