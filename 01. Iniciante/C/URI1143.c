// URI 1143. Quadrado e ao Cubo

#include <stdio.h>
#include <math.h>

int main()
{
    int a, x, y, i;

    scanf("%d", &a);

    for (i = 1; i <= a; i++)
    {
        x = pow(i, 2);
        y = pow(i, 3);

        printf("%d %d %d\n", i, x, y);
    }

    return 0;
}