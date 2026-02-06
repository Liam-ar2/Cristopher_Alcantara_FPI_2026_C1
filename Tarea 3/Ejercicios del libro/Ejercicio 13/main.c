#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Ctrl_ciclo, Primer_num = 0, Segundo_num = 1, Siguiente_num;

    printf("\t %d \t %d", Primer_num, Segundo_num);

    for (Ctrl_ciclo = 3; Ctrl_ciclo<=50; Ctrl_ciclo++)
    {
        Siguiente_num = Primer_num + Segundo_num;
        Primer_num = Segundo_num;
        Segundo_num = Siguiente_num;

        printf("\t %d", Siguiente_num);
    }

    return 0;
}
