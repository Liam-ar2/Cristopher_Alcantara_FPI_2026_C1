#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int Valor_1;
    float Valor_2;

    printf("Ingrese un numero: ");
    scanf("%d", &Valor_1);

    if(Valor_1 < 0 || Valor_1 > 50){
        Valor_2 = 0;

    } else{

        if(Valor_1 <= 10){
        Valor_2 = (4/Valor_1) - Valor_1;
      } else{

        if(Valor_1 <= 25){
            Valor_2 = pow(Valor_1,3) - 12;
        } else {
            Valor_2 = pow(Valor_1,2) + pow(Valor_1,3) - 18;
        }
    }

    }

    printf("%d %.2f", Valor_1, Valor_2);
    return 0;
}
