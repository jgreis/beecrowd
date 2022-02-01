// URI 1060. Números Positivos

#include <stdio.h>

int main()
{
    float x;
    int pos, i;

    for (i = 1; i <= 6; i++)
    {
        scanf("%f", &x);
        if (x >= 0)
            pos += 1;
    }

    printf("%d valores positivos\n", pos);

    return 0;
}