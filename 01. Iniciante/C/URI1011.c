// URI 1011. Esfera

#include <stdio.h>
#include <math.h>

int main()
{
    double pi = 3.14159, R, volume;

    scanf("%lf", &R);

    volume = (4.0 / 3) * pi * pow(R, 3);

    printf("VOLUME = %.3lf\n", volume);

    return 0;
}