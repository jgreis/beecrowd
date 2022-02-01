// URI 1064. Positivos e Média

#include <stdio.h>

int main()
{
    float x, total = 0, media = 0;
    int i, positivos = 0;

    for (i = 1; i <= 6; i++)
    {
        scanf("%f", &x);
        if (x > 0)
        {
            positivos += 1;
            total += x;
        }
    }
    media = total / positivos;

    printf("%d valores positivos\n", positivos);
    printf("%.1f\n", media);
    return 0;
}