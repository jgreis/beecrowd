// URI 1078. Tabuada

#include <stdio.h>

int main()
{
    int N, i, resultado;

    scanf("%d", &N);

    for (i = 1; i <= 10; i++)
    {
        resultado = N * i;
        printf("%d x %d = %d\n", i, N, resultado);
    }

    return 0;
}