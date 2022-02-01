// URI 1014. Consumo

#include <stdio.h>

int main()
{
    int X;
    float Y;
    double consumo;

    scanf("%d", &X);
    scanf("%f", &Y);

    consumo = X / Y;

    printf("%.3lf km/l\n", consumo);

    return 0;
}