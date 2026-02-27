#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *cad0;

    cad0 = "RD";
    puts(cad0);

    cad0 = "Haiti";
    puts(cad0);

    //////Incorrecto//////
    /* char *cad1;
    gets(*cad1);
    gets(cad1) */

    //////Correcto//////
    char *cad1 = "";
    gets(cad1);

    //////Incorrecto//////
    /* char cad1[]; */

    //////Correcto//////
    char cad2[20] = "EEUU";
    puts(cad2);

    gets(cad2);
    puts(cad2);

    //////Incorrecto//////
    /* cad2[10] = "Canada"; */

    return 0;
}
