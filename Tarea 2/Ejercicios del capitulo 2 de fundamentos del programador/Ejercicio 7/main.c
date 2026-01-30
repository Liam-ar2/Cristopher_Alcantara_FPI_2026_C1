#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float vendedor_1, vendedor_2, vendedor_3;

    printf("Ingresa las ventas de los vendedores: ");
    scanf("%f %f %f", &vendedor_1,&vendedor_2,&vendedor_3);

    if(vendedor_1 > vendedor_2){

        if(vendedor_1 > vendedor_3){

            if(vendedor_2 > vendedor_3){
                printf("\nEl orden es \nVendedor 1: %.2f \nVendedor 2: %.2f \nVendedor 3: %.2f", vendedor_1,vendedor_2,vendedor_3);
            } else {
                printf("\nEl orden es \nVendedor 1: %.2f \nVendedor 3: %.2f \nVendedor 2: %.2f", vendedor_1,vendedor_3,vendedor_2);
            }
        } else {
            printf("\nEl orden es \nVendedor 3: %.2f \nVendedor 1: %.2f \nVendedor 2: %.2f", vendedor_3,vendedor_1,vendedor_2);
        }
    } else {
        if(vendedor_2 > vendedor_3){

             if(vendedor_1 > vendedor_3){
                printf("\nEl orden es \nVendedor 2: %.2f \nVendedor 1: %.2f \nVendedor 3: %.2f", vendedor_2,vendedor_1,vendedor_3);

             }else{
                printf("\nEl orden es \nVendedor 2: %.2f \nVendedor 3: %.2f \nVendedor 1: %.2f", vendedor_2,vendedor_3,vendedor_1);
             }

        } else
            printf("\nEl orden es \nVendedor 3: %.2f \nVendedor 2: %.2f \nVendedor 1: %.2f", vendedor_3,vendedor_2,vendedor_1);
    }

    return 0;
}
