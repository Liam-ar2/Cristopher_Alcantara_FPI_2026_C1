#include <stdio.h>
#include <string.h>

typedef struct
{

    int Clave;
    char Nombre[15];
    float Precio;
    int Existencia;

} producto;

    void Lectura(producto *, int);
    void Ventas(producto *, int);
    void Reabastecimiento(producto *, int);
    void Nuevos_Productos(producto *, int *);
    void Inventario(producto *, int);

void main(void)
{
producto Inv[100];

int Tam, Ope;

    do
    {
        printf("\nIngrese el numero de productos: ");
        scanf("%d", &Tam);

    }
    while (Tam > 100 || Tam < 1);

        Lectura(Inv, Tam);

        printf("\nIngrese la operacion a realizar: \n\t\t 1.Ventas \n\t\t 2.Reabastecimiento \n\t\t 3.Nuevos Productos \n\t\t 4.Inventario \n\t\t 0.Salir: ");
        scanf("%d", &Ope);

    while (Ope)
    {
    switch (Ope)
        {
            case 1: Ventas(Inv, Tam);
            break;

            case 2: Reabastecimiento(Inv, Tam);
            break;

            case 3: Nuevos_Productos(Inv, &Tam);
            break;

            case 4: Inventario(Inv, Tam);
            break;
         };

    printf("\nIngrese la operacion a realizar: \n\t\t 1.Ventas \n\t\t 2.Reabastecimiento \n\t\t 3.Nuevos Productos \n\t\t 4.Inventario \n\t\t 0.Salir: ");
    scanf("%d", &Ope);
    }
}

void Lectura(producto A[], int T)
{
 int I;

    for (I=0; I<T; I++)
    {
        printf("\nIngrese la informacion del producto %d", I+1);

        printf("\n\tClave: ");
        scanf("%d", &A[I].Clave);

        printf("\tNombre: ");
        getchar();
        fgets(A[I].Nombre, 15, stdin);
        A[I].Nombre[strcspn(A[I].Nombre, "\n")] = '\0';

        printf("\tPrecio: ");
        scanf("%f", &A[I].Precio);

        printf("\tExistencia: ");
        scanf("%d", &A[I].Existencia);
    }
}

void Ventas(producto A[], int T)
{
    int Cla, Can, I, Res;
    float Tot, Par;

    printf("\nIngrese la clave del producto (0 para salir): ");
    scanf("%d", &Cla);

    Tot = 0.0;

    while (Cla)
    {
        printf("\tCantidad: ");
        scanf("%d", &Can);

        I = 0;

        while ((I < T) && (A[I].Clave < Cla))
        I++;

        if ((I == T) || (A[I].Clave > Cla))
        printf("\nLa clave del producto es incorrecta");

        else
         if (A[I].Existencia >= Can)
            {
            A[I].Existencia -= Can;
            Par = A[I].Precio * Can;
            Tot += Par;
            }
        else
        {
        printf("\nNo existe en inventario la cantidad solicitada. Solo hay %d", A[I].Existencia);

        printf("\nLos lleva 1.Si 0.No?: ");
        scanf("%d", &Res);

         if (Res)
            {
            Par = A[I].Precio * A[I].Existencia;
            A[I].Existencia = 0;
            Tot += Par;
            }
        }

            printf("\nIngrese la siguiente clave del producto (0 para salir):");
            scanf("%d", &Cla);
    }

   printf("\nTotal de la venta: %f", Tot);
}

void Reabastecimiento(producto A[], int T)
{
    int Cla, Can, I;

    printf("\nIngrese clave del producto (0 para salir): ");
    scanf("%d", &Cla);

    while (Cla)
    {
        I = 0;

        while ((I < T) && (A[I].Clave < Cla))
        I++;

        if ((I==T) || (A[I].Clave > Cla))
        printf("\nLa clave del producto ingresada es incorrecta");

        else
        {
            printf("\tCantidad: ");
            scanf("%d", &Can);
            A[I].Existencia += Can;
        }

        printf("\nIngrese otra clave del producto (0 para salir): ");
        scanf("%d", &Cla);
    }
}

void Nuevos_Productos(producto A[], int *T)
{
int Cla, I, J;

printf("\nIngrese clave del producto (0 para salir): ");
scanf("%d", &Cla);

    while ((*T < 30) && (Cla))
    {
    I=0;

        while ((I < *T) && (A[I].Clave < Cla))
        I++;

            if (I == *T)
            {
                A[I].Clave = Cla;

                printf("\tNombre: ");
                getchar();
                fgets(A[I].Nombre, 15, stdin);
                A[I].Nombre[strcspn(A[I].Nombre, "\n")] = '\0';

                printf("\tPrecio: ");
                scanf("%f", &A[I].Precio);

                printf("\tCantidad: ");
                scanf("%d", &A[I].Existencia);

                *T = *T + 1;
            }
            else if (A[I].Clave == Cla)
            printf("\nEl producto ya se encuentra en el inventario");

            else
            {
                for (J=*T; J>I; J--)
                A[J] = A[J-1];

                A[I].Clave = Cla;

                printf("\tNombre: ");
                getchar();
                fgets(A[I].Nombre, 15, stdin);
                A[I].Nombre[strcspn(A[I].Nombre, "\n")] = '\0';

                printf("\tPrecio: ");
                scanf("%f", &A[I].Precio);

                printf("\tCantidad: ");
                scanf("%d", &A[I].Existencia);

                *T = *T + 1;
            }

        printf("\nIngrese otra clave de producto (0 para salir): ");
        scanf("%d", &Cla);
     }

    if (*T == 30)
    printf("\nYa no hay espacio para incorporar nuevos productos");
}

void Inventario(producto A[], int T)
{
int I;

    for (I=0; I<T; I++)
    {
        printf("\nClave: %d", A[I].Clave);
        printf("\tNombre: %s", A[I].Nombre);
        printf("\tPrecio: %.2f", A[I].Precio);
        printf("\tExistencia: %d \n", A[I].Existencia);
    }
}
