#include <stdio.h>
#include <stdlib.h>
#include <math.h>

///////////////////////////////////////DEFINICIONES///////////////////////////////////////

#define SALIR 0
#define NUEVO 1
#define SUMAR 2
#define RESTAR 3
#define MULTIPLICAR 4
#define DIVIDIR 5
#define RAIZ 6
#define ERROR_DIVbyZERO 100
#define ERROR_OK 0
#define ERROR_NUM_NEGATIVO 99
#define ERROR_RAIZ_DE_CERO 999

////////////////////////////////////////////////////////////////////////////////////////////////

int Sumar(float Numero_1,float Numero_2, float *result);
int Restar(float Numero_1,float Numero_2, float *result);
int Multiplicar(float multiplicando,float multiplicador, float *result);
int Dividir(float dividendo,float divisor, float *result);
int Raiz(float radicando, float *result);

////////////////////////////////////////////////////////////////////////////////////////////////


int main()
{
    int Menu = NUEVO;
    int cod_error = ERROR_OK;
    float Numero_1 = 0.0;
    float Numero_2 = 0.0;
    float result = 0.0;

    do{

        printf("\n0-Salir\n1-Nuevo\n2-Sumar\n3-Resta\n4-Multiplicar\n5-Dividir\n6-Raiz\n");
        scanf("%i", &Menu);

///////////////////////////////////////SUMA//////////////////////////////////////////////////////

            if(Menu == SUMAR)
            {
                printf("Ingrese el primer numero a Sumar: ");
                scanf("%f", &Numero_1);

                printf("Ingrese el segundo numero a Sumar: ");
                scanf("%f", &Numero_2);
                cod_error = Sumar(Numero_1,Numero_2,&result);

                if(cod_error != ERROR_OK)
                {
                    printf("Error en la Suma");

                }else
                {
                    printf("El resultado de sumar %f + %f es: %.2f\n", Numero_1,Numero_2,result);
                }
            }

///////////////////////////////////////RESTA///////////////////////////////////////////////////

            if(Menu == RESTAR)
            {
                printf("Ingrese el primer numero a Restar: ");
                scanf("%f", &Numero_1);

                printf("Ingrese el segundo numero a Restar: ");
                scanf("%f", &Numero_2);
                cod_error = Restar(Numero_1,Numero_2,&result);

                if(cod_error != ERROR_OK)
                {
                    printf("Error en la Resta");

                }else
                {
                    printf("El resultado de restar %f - %f es: %.2f\n", Numero_1,Numero_2,result);
                }
            }

///////////////////////////////////////MULTIPLICACION///////////////////////////////////////////

            if(Menu == MULTIPLICAR)
            {
                printf("Ingrese el multiplicando: ");
                scanf("%f", &Numero_1);

                printf("Ingrese el multiplicador: ");
                scanf("%f", &Numero_2);
                cod_error = Multiplicar(Numero_1,Numero_2,&result);

                if(cod_error != ERROR_OK)
                {
                    printf("Error en la Multiplicacion");

                }else
                {
                    printf("El resultado de multiplicar %f * %f es: %.2f\n", Numero_1,Numero_2,result);
                }
            }


////////////////////////////////////////////////DIVISION/////////////////////////////////////////////

             if(Menu == DIVIDIR)
            {
                printf("Ingrese el dividendo: ");
                scanf("%f", &Numero_1);

                printf("Ingrese el divisor: ");
                scanf("%f", &Numero_2);
                cod_error = Dividir(Numero_1,Numero_2,&result);

                if(cod_error != ERROR_OK)
                {
                    if(cod_error == ERROR_DIVbyZERO)
                    {
                      printf("Error en la divicion(divicion por cero)");
                    }

                }else
                {
                    printf("El resultado de dividir %f / %f es: %.2f\n", Numero_1,Numero_2,result);
                }
            }

////////////////////////////////////////////////RAIZ//////////////////////////////////////////////

             if(Menu == RAIZ)
            {
                printf("Ingrese el radicando: ");
                scanf("%f", &Numero_1);
                cod_error = Raiz(Numero_1, &result);

                if(cod_error != ERROR_OK)
                {
                    if(cod_error == ERROR_NUM_NEGATIVO)
                    {
                       printf("Error: no existe raiz cuadrada de un numero negativo");
                    }
                    else if (cod_error == ERROR_RAIZ_DE_CERO)
                    {
                        printf("Error: no existe raiz de 0\n");

                    }

                }else
                {
                     printf("La raiz cuadrada de %.2f es: %.2f\n", Numero_1, result);
                }
            }

///////////////////////////////////////////////////////////////////////////////////////////////////

    }while(Menu != SALIR);

    return 0;

}

////SUMA////
int Sumar(float Numero_1,float Numero_2, float *result)
{
    *result = Numero_1 + Numero_2;
    return ERROR_OK;
}

////RESTA////
int Restar(float Numero_1,float Numero_2, float *result)
{
    *result = Numero_1 - Numero_2;
    return ERROR_OK;
}

////Multiplicacion////
int Multiplicar(float multiplicando,float multiplicador, float *result)
{
     *result = multiplicando * multiplicador;
    return ERROR_OK;
}

////DIVISION////
int Dividir(float dividendo,float divisor, float *result)
{
   if(divisor == 0)
   {
     return ERROR_DIVbyZERO;
   }else
   {
       *result = dividendo/divisor;
       return ERROR_OK;
   }
}

////RAIZ////
int Raiz(float radicando, float *result)
{
    if(radicando < 0)
    {
        return ERROR_NUM_NEGATIVO;
    }
    if (radicando == 0)
    {
        return ERROR_RAIZ_DE_CERO;
    }

    else
    {
        *result = sqrt(radicando);
        return ERROR_OK;
    }
}
