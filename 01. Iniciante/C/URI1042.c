// URI 1042. Sort Simples

#include <stdio.h>

int main()

{

    int a, b, c, x, y, z, cont;

    scanf("%d %d %d", &a, &b, &c);

    x = a;
    y = b;
    z = c;

    if (x < y)
    {
        cont = x;
        x = y;
        y = cont;
    }

    if (y < z)
    {
        cont = y;
        y = z;
        z = cont;
    }

    if (x < y)
    {
        cont = x;
        x = y;
        y = cont;
    }

    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", z, y, x, a, b, c);

    return 0;
}