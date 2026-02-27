#include <stdio.h>
#include <stdlib.h>

int main()
{
    char p1, p2, p3 = '$';

    printf("\nIngrese una letra: ");
    p1 = getchar();
    putchar(p1);

    printf("\n");
    fflush(stdin);

    printf("\nLa letra p3 es: ");
    putchar(p3);

    printf("\n");

    printf("\nIngrese otra letra: ");
    fflush(stdin);

    scanf("%c", &p2);
    printf("%c", p2);

    return 0;
}
