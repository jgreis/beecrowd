// URI 1017. Gasto de Combustível

#include <stdio.h>

int main()
{
    int tempo_viagem, vel_media;
    float consumo;

    scanf("%d", &tempo_viagem);
    scanf("%d", &vel_media);

    consumo = (tempo_viagem * vel_media) / 12.0;

    printf("%.3lf\n", consumo);

    return 0;
}